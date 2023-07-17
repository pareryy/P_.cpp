#include<iostream>
#include<string>
using namespace std;
int main()
{
	string Name ;
	float salary,sale,comm ;
    cout << "Enter name : " ;
	cin >> Name;
    cout << "Enter salary : " ;
	cin >> salary ;
    cout << "Enter sale : " ;
	cin >> sale ;
	cout << "Enter commission percent : ";
	cin >> comm;
    cout << "Your name = " << Name<<endl;
    cout << "Total Revenue " <<salary+(sale*(comm/100))<< endl;
	return(0);
}