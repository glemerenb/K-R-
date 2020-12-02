#include <iostream>

using namespace std;

int main() {
	int character;

	while ((character = getchar()) != EOF) {
		if (character == '\t') {
			putchar('\\');
			putchar('t');
		}
		if (character == '\\') {
			putchar('\\');
			putchar('\\');
		}
		if (character == '\b') {
			putchar('\\');
			putchar('b');
		}
		if(character != '\b' && character != '\\' && character != '\t') {
			putchar(character);
		}
	}
}