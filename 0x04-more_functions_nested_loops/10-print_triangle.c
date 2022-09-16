#include "main.h"

/**
 * print_triangle - function that draws a triangle on the terminal
 * @size: size of te square
 * Return: void
 */
void print_triangle(int size)
{
	int x, y = 0;
	int space;

	if (size > 0)
{
	space = size - y - 1;
while (x < size)
{
if (space > x)
{
_putchar(' ');
}
else

		_putchar('#');
					}
					x++;
				}
				
				y++;
				x = 0;
				_putchar ('\n');
		}
		else
		{
			_putchar('\n');
		}
	}
