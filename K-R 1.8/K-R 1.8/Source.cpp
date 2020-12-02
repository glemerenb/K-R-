#include <iostream>

using namespace std;

int main()
{
	int c;
	int tab = 0;
	int space = 0;
	int end = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			++tab;
		}
		if (c == ' ') {
			++space;
		}
	}
	if (c == EOF) {
		++end;
	}
	cout << "tab: " << tab << "\tspace: " << space << "  end: " << end;
}

