#include "../include/debug.h"

void print_token(Token *token) {
    char *type;
    switch (token->type) {
        case _NUMBER: type = "_NUMBER"; break;
        case _STRING: type = "_STRING"; break;
        case _TRUE:   type = "_TRUE"; break;
        case _FALSE:  type = "_FALSE"; break;
        case _NIL:    type = "_NIL"; break;
        case _LET:    type = "_LET"; break;
        case _IF:     type = "_IF"; break;
        case _ELSE:   type = "_ELSE"; break;
        case _AND:    type = "_AND"; break;
        case _OR:     type = "_OR"; break;
        case _RIGHT_PAR: type = "_RIGHT_PAR"; break;
        case _LEFT_PAR: type = "_LEFT_PAR"; break;
        case _RIGHT_CURLY: type = "_RIGHT_CURLY"; break;
        case _LEFT_CURLY: type = "_LEFT_CURLY"; break;
        case _SEMICOLON: type = "_SEMICOLON"; break;
        case _COMMA:  type = "_COMMA"; break;
        case _EQUAL:  type = "_EQUAL"; break;
        case _BANG:   type = "_BANG"; break;
        case _PLUS:   type = "_PLUS"; break;
        case _MINUS:  type = "_MINUS"; break;
        case _EOF:    type = "_EOF"; break;
        case _SLASH:    type = "_SLASH"; break;
        case _BANG_EQUAL:  type = "_BANG_EQUAL"; break;
        case _EQUAL_EQUAL:  type = "_EQUAL_EQUAL"; break;
        case _GREATER:  type = "_GREATER"; break;
        case _GREATER_THAN:  type = "_GREATER_THAN"; break;
        case _LESS:  type = "_LESS"; break;
        case _LESS_THAN:  type = "_LESS_THAN"; break;
        case _IDENTIFIER:  type = "_IDENTIFIER"; break;
        case _FOR:  type = "_FOR"; break;
        case _PRINT:  type = "_PRINT"; break;
        case _RETURN:  type = "_RETURN"; break;
        case _WHILE:  type = "_WHILE"; break;
        case _DEF:  type = "_DEF"; break;
        case _ERROR:  type = "_ERROR"; break;
        case _NONE:  type = "_NONE"; break;
        case _STAR:     type = "_STAR"; break;
        case _DOT:     type = "_DOT"; break;
    }

    printf("TOKEN[type: %s, value: \"%s\", line: %d]\n",
            type, token->value, token->line);
}