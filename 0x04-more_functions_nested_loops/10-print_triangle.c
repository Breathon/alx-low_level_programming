#include "main.h"

/**
 * print_triangle - function that draws a triangle on the terminal
 * @size: size of te square
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;
	int x, y = 0;
	int space;

	i = 1;
	j = 1;
	if (size > 0)

	{
		while (i <= size)
		while (y < size)
		{
			while (j <= size - i)
			{
				_putchar(' ');
				j++;
			}
				j = 1;
				while (j <= i)
				space = size - y - 1;
				while (x < size)
				{
					_putchar('#');
					j++;
					if (space > x)
					{
						_putchar(' ');
					}
					else
					{
						_putchar('#');
					}
					x++;
				}
				_putchar('\n');
				i++;
				y++;
				x = 0;
				_putchar ('\n');
		}
		else
		{
			_putchar('\n');
		}
	}
