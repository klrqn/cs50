#include <stdio.h>
#include <cs50.h>

int main(void) {
	string s = get_string("Name: ");
	printf("Hello, %s\n", s);
}

// clang -o get-name get-name.c