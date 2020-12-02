#include <iostream>

using namespace std;

#define IN 1
#define OUT 0

int main() 
{
	int character, num_of_word, state;

	num_of_word = 0;
	state = OUT;
	while ((character = getchar()) != EOF) {
		if (character == ' ' || character == '\t' || character == '\n') {
			state = OUT;
		}
		else if (state == OUT) {
			state = IN;
			++num_of_word;
		}
	}
	cout << "number of word: " << num_of_word;
}
/*если символ равен пробелу, табуляции или переходу на новую строку,то
состояние вне слова

если символ не равен пробелу..., то проверяем чтобы состояние было вне
слова и тогда мы присваиваем нашей переменной внутри слова.
если наш символ опять не равен пробелу..., то проверку чтобы
состояние было вне слова этот символ не проходит и все возвращается
к чтению нового символа
*/