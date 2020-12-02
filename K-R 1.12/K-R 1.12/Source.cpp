#include <iostream>

//написать программу для вывода входного потока по одному слову в строке

using namespace std;

#define IN 1
#define OUT 0

int main()
{
	int character;
	int state = OUT;

	while ((character = getchar()) != EOF) {
		if (character == ' ' || character == '\t')
			state = OUT;
		else if (state == OUT) {
			putchar('\n');
			state = IN;
		}
		putchar(character);
	}
}