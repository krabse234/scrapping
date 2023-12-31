#include <cs50.h>
#include <stdio.h>

//	new code "compare.c"

int main(void)
{
	int x = get_int("what's x? ");
	int y = get_int("what's y? ");
	
	if (x < y)
	{
		printf("x is less than y\n");
	}
}

//then use this in ur vscode terminal to run code and print result "./<file_name>" but inthis case it is e.g./compare
./compare 

