#ifndef CALC_H
#define CALC_H
/**
 * struct op - Struct op
 *
 * @p: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f) (int a, int b);
} op_t;

/*selection function*/
int ((*get_op_func(char *s))(int, int));
		
/*operations*/
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
#endif /*CALC_H*/