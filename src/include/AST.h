#ifndef AST_H
#define AST_H
typedef struct AST_STRUCT{
    enum{
        AST_VARIABLE_DEFINITION,
        AST_VARIABLE,
        AST_FUNCTION_CALL,
        AST_STRING
    } type;

    /* AST_VARIABLE_DEFINITION*/
    char* variable_definition_variable_name;
    struct AST_STRUCT* variable_definition_value;

    /* AST_VARIABLE*/
    char* variable_name;
} AST_T;

#endif