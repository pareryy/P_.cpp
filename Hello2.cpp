#include<iostream>
using namespace std;
int main ()

{
	int a;
	cout << " Amount to be withdraw : " ;
	cin >> a;
	cout << " 1000 = " << a/1000 << endl ;
	cout << " 100 = " << (a%1000)/100 << endl ;
	cout << " 50 = " << (a%100)/50 << endl ;
	cout << " 20 = " << (a%50)/20 << endl ;

	return(0) ;
}



