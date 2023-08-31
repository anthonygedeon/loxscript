#include <string>
#include <any>

#include "token_type.hpp"

class Token {
	TokenType m_type;
	std::string m_lexeme;
	std::any m_literal;
	int m_line;

public:
	Token(TokenType type, std::string lexeme, std::any literal, int line) {
		m_type = type;
		m_lexeme = lexeme;
		m_literal = literal;
		m_line = line;
	}

	std::string toString() {
		return m_type + " " + m_lexeme + " " + std::any_cast<std::string>(m_literal);
	}
};
