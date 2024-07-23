#ifndef TOKEN
#define TOKEN

#include <stdlib.h>
#include <stdbool.h>

enum TokenType{
    TTEOF   =0,
    TTIdentifier,
    TTInt32,
    TTString,
    TTKeyword,
    TTOperator,
    TTSeperator
};

struct Token{
    enum TokenType type;
    size_t line;
    void* value;
};

#define KEYWORDS 1
extern const char* keywords[1];

struct Token CreateToken(enum TokenType type, size_t line, void* value);
const char* GetTokenName(struct Token token);
bool IsValueType(enum TokenType type);
bool IsKeywordValueType(const char* value);
#endif