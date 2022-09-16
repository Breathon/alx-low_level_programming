#include "main.h"

/**
 * print_triangle - Function that prints a triangle, followed by a new line.
 * @size: the int for the paramaters of my function
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int i, j;
	int x, y = 0;
	int space;
	{
		while (y < size)
		{
			space = size - y - 1;
			while (x < size)
			{
				if (space > x)
				{
					_putchar(' ');
				}
				else
				{				
