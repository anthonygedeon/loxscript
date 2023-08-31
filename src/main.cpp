#include <iostream>
#include <fstream>
#include <sysexits.h>
#include <string>
#include <sstream>
#include <vector>
#include <string_view>

class Lox {
	// void run(std::string source);
	// void runFile(std::string path);
	// void runPrompt();

	public:
	static inline bool hadError{ false };

	static void runFile(std::string path) {
		std::ifstream input_file{ path };

		if (!input_file) {
			std::cerr << "could not open " << path << " for reading\n";
		}

		std::stringstream buffer{};
		buffer << input_file.rdbuf();

		run(buffer.str());

		if (Lox::hadError) {
			exit(EX_DATAERR);
		}
	}

	static void runPrompt() {
		for(;;) {
			std::cout << "> ";
			std::string buffer;
			std::getline(std::cin, buffer);
			if (buffer.empty()) break;
			run(buffer);
			Lox::hadError = false;
		}
	}

	static void run(std::string source) {
		// Scanner scanner{ new Scanner(source) };
		// std::vector<Token> tokens{ scanner.scanTokens() };
		//
		// for (auto token : tokens) {
		// 	std::cout << token << std::endl;
		// }
	}

	static void error(int line, std::string message) {
		report(line, "", message);
	}

	private:
	static void report(int line, std::string where, std::string message) {
		std::cout << "[line " <<line << "] Error" << where << ": "  << message; 
		Lox::hadError = true;
	}
};

int main(int argc, char* argv[]) {
	if (argc > 2) {
		std::cout << "Usage: lox [script]\n";
		exit(EX_DATAERR);
	} else if ((argc - 1) == 1) {
		Lox::runFile(argv[1]);
	} else {
		Lox::runPrompt();
	}
	return EXIT_SUCCESS;
}

