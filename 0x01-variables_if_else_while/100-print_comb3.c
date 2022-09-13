#include <stdio.h>
#include  <stdlib.h>
/** 
 * program to print two numbe combination from 0-9 in which
 * the numbers must be distinc
 * separated by comma
 * and number patterns containing the same digits must not repaeat itsef i.e 01=10
 */
/**
 * main-entrypoint
 *
 * Return: always 0
 */
int main(void){
	int j;
	int first = '0';
	int second = j = '9';
	
	for (first; first <= second; first++)
	{
		for (int i = first + 1; i <= j; i++)
		{
			putchar(first);
			putchar(i);
			if ((first != j) || (i != second))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
