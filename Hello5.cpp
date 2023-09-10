#include <iostream>
#include <ctime>
using namespace std;
void puts(string);
void welcomeText();
int getGuessNumber();

int main()
{	
	srand(time(NULL));
	int guess,number;
	int guessed = 0;
	number = rand() % 10 + 1;
	cout << ("###Welcome to guessing number game###")<<endl;
	cout << ("Secret number has been chosen")<<endl;

	do{ guess = getGuessNumber();
		guessed++;
		if (number < guess)
            puts("The secret number is lower");
        else if(number > guess)
            puts("The secret number is higher");
	}
	while (number != guess);

    puts("Congratulations!");
    cout << "The secret number is " << number << endl;
    cout << "You made " << guessed << " guess";
    cout << (guessed != 1 ? "es" : "") << endl;

	return(0);
}
void puts(string str)
{
    cout << "str" << endl;
}

void welcomeText()
{
    puts("###Welcome to guessing number game###");
}

int getGuessNumber()
{
    int guess;
    cout << "Guess the number (1 to 10): ";
    cin >> guess;
    return guess;
}
