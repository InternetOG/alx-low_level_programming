/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

#endif
