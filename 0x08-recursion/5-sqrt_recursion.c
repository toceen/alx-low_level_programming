#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds the natural square root of an inputted number
 * @num: the number to find the square root of
 * @root: the root to be tested
 *
 * Return: if the number has a natural square root - the square root else -1
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
