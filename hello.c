# edx, cs50 
# first line of code when using vs code
#include <cs50.h>
#include <stdio.h>

int main(void)
{

//	string answer = get_string("what's your name? ");
	string first = get_string("what's your first name? ");
	string last = get_string("what's your last name? ");
//	prnitf("hello, %s\n", first);
	printf("hello, %s %s\n", first, lastname);
//	printf("hello, answer\n");
//	printf("hello, world\n");

}


// then use this i ur vscode terminal "make" hello to check code e.g:
make hello 
//then use this in ur vscode terminal to run code and print result "./<file_name>" but inthis case it is e.g./hello
./hello


//	new code ("compare.c")

#include <cs50.h>
#include <stdio.h>

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



//	new code ("meow.c")

#include <cs50.h>
#include <stdio.h>

int main(void)
{
	printf("meow\n");
	printf("meow\n");
	printf("meow\n");
}

//then use this in ur vscode terminal to run code and print result "./<file_name>" but inthis case it is e.g./meow
make meow
./meow

