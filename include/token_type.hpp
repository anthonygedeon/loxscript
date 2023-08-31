#ifndef TOKEN_TYPE_H
#define TOKEN_TYPE_H

enum TokenType {
	// Single-character tokens
	LEFT_PAREN, RIGHT_PAREN, LEFT_BRACE, RIGHT_BRACE, COMMA, DOT, MINUS, PLUS,
	SEMICOLON, SLASH, STAR,
	
	// One or two character tokens
	BANG, BANG_EQUAL, EQUAL, EQUAL_EQUAL, GREATER, GREATER_EQUAL, LESS,
	LESS_EQUAL,
	
	// Literals
	IDENTIFIER, STRING, NUMBER,
	
	// Keywords
	AND, CLASS, ELSE, FALSE, FUN, FOR, IF, NIL, OR, PRINT, RETURN, SUPER, THIS,
	VAR, WHILE,

	END_OF_FILE,
};

// std::string tokenToString(TokenType token) {
// 	switch (token) {
// 		case TokenType::LEFT_PAREN: 
// 			return "LEFT_PAREN";
// 			break;
// 		default:
// 			break;
// 	}
// }
#endif
