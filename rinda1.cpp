#include <iostream>
#include <string>
using namespace std;
int main()
{
	char Choice;
	float Area;
	cout << " Program Calculate Area " << endl;
	cout << " 1. Clrcle" << endl;
	cout << " 2. Rectangle" << endl;
	cout << " 3. Right-angled Triangle" << endl;
	cout << " 4. Exit" << endl;
	cout << "Enter your choose number: ";
	cin >> Choice;
	if (Choice == '1') 
	{	float Radius;
		cout << "\nEnter radius : ";
		cin >> Radius;
		Area = 3.14159F * Radius * Radius;
		cout << "Area of Circle = " << Area << endl;
	}
	else if (Choice == '2') 
	{	float Length,Width;
		cout << "Enter length and width : ";
		cin >> Length >> Width;
		Area = Length * Width;
		cout << "Area of Rectangle = " << Area << endl;
	}
	else if (Choice == '3')
	{	float height,base ;
		cout << "Enter height and base : ";
		cin >> height >> base ;
		Area = 1.0/2.0 * height * base ;
		cout << "Area of Right-angled Triangle = " << Area << endl;
	}
	else if (Choice == '4') cout << "\n . . . Exit Program . . .\n";
	else cout << "\nYou choose out of range is not process.\n";

	return(0);

}