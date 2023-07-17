#include<iostream>
#include<string>
using namespace std;
int main()
{   float w; 
    float h;
    cout << "Enter weight : " ;
	cin >> w;
    cout << "Enter height : " ;
	cin >> h;
    cout << " BMI = " << w / (( h/100)*(h/100)) << endl;
    system("pause");
	return(0);
}