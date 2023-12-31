//	new code ("Agree.c")

#include <cs50.h>
#include <stdio.h>

int main(void)
{
	char c = get_char("Do you agree? ");
	
	if (c == 'y' || c == 'Y')
	{
		printf("Agreed.\n");
	}
	else if (c == 'n' || c == 'N')
	{
		printf("Not agreed.\n");
	}
}

//then use this in ur vscode terminal to run code and print result "./<file_name>" but inthis case it is e.g./agree
make agree
./agree

