#include <iostream>
using namespace std;
int main()
{	
	int num1,num2,Total = 0 ;
	cout << "Enter num1 : ";
	cin >> num1 ;
	cout << "Enter num2 : ";
	cin >> num2 ;
	for(int n = 1; n <= num2 ; n++ ) 
	{	cout << num1 << " * " <<n<< " = "<< num1*n << endl ;
		Total = Total+(num1*n);
	}
	cout << "Total Score = " << Total << endl;
	cout << "AVG. Score = " << Total/(float)num2 << endl;
	system("pause");
	return(0);
}