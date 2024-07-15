#include "calc.h"

/**
 * get_op_func - Exec 'the correct function'
 * @s: argument of program
 * Return: null if 's' not match of 5 expected operators
 */

int (*get_op_func(char *s))(int, int)
{

