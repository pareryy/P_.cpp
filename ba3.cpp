#include <iostream>
#include <string>
using namespace std;
int main()

{
	string Gender ;
	float BMI,Height,Weight ;
	int Age ;
	cout <<"Enter age : ";
	cin >> Age ;
	cout <<"Enter gender : ";
	cin >> Gender ;
	cout <<"Enter height : ";
	cin >> Height ;
	cout <<"Enter weight : ";
	cin >> Weight ;
	BMI = Weight / (Height/100 * Height/100);
	cout << "BMI : " << BMI << endl;

	if (BMI <= 18.5)
	cout << "Underweight\n";

	else if (BMI <= 25)
		cout << "Normal\n" ;

	else if (BMI <= 35)
		cout << "Overweight\n" ;

	else if (BMI > 35)
		cout << "Obesity\n" ;

	system("pause");
	return(0);		
}