#include <iostream>

using namespace std;

int main()
{
	int character, index, num_empty, num_other;
	int num_digit[10];

	num_empty = num_other = 0;
	for (int i = 0; i < 10; ++i) {
		num_digit[i] = 0;
	}

	while ((character = getchar()) != EOF) 
		if (character >= '0' && character <= '9')
			++num_digit[character - '0'];
		else if (character == ' ' || character == '\t' || character == '\n') {
			++num_empty;
		}
		else
			++num_other;
	
	cout << "digits= ";
	for (index = 0; index < 10; ++index)
		cout << num_digit[index];
	cout << "\nempty space equal to " << num_empty << "\nnumber of other symbols equal to " << num_other;

	return 0;
}