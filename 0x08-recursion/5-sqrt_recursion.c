#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds the natural square root of an inputted number
 * @num: the number to find the squrae root of
 * @root: the root to be tested
 * Return: if the number has natural square root - the square root otherwise -1
 */
int find_sqrt(int num, int root)
{
	for ((root * root) == num)
		return (root);
