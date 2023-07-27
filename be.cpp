#include <iostream>
#include <string>
using namespace std;
int main()
{
	int first, second, third ; 
	string mid, final ;
	cout << "Enter first quizz (10) : ";
	cin >> first ;
	cout << "Enter second quizz(10) : ";
	cin >> second ;
	cout << "Enter third quizz (10) : ";
	cin >> third ;
	//case 1
	cout << "Enter mid-term (40) : ";
	cin >>  mid ;
	//case 2 
	cout << "Enter final (50) : ";
	cin >> final ;
	float Quizz,Mid,Fianal,Total ;
	cout << "Quizz total : " ;
	cin >> Quizz ;
	cout << "Mid term : " ;
	cin >> Mid ;
	cout << "Fianal : " ;
	cin >> Fianal ;
	cout << "Total : " ;
	cin >> Total ;
	cout << " Your score isPASS " ;
	cout << " Press any key to continue " ;
    
	return (0);
}