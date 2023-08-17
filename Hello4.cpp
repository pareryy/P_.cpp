#include <iostream>
using namespace std;
int main()
{
	char menu ;
	int n ;
	cout << "Select Menu" << endl;
	cout << "***********" << endl;
	cout << "1.Align Left" << endl;
	cout << "2.Align Right" << endl;
	cout << "3.Center" << endl;
	cout << "4.Exit" << endl;
	cout << "***********" << endl;
	do{
		cout << "Select Menu No :" ;
		cin >> menu ;
		if (menu == '1')
		{
			cout << "Input number of line :" ;
			cin >> n ;
			for (int i=1 ; i <= n ; i++)
			{	
				for(int k = n ; k >= i ; k--)
				cout << " " ;
				for(int p = n ; p >= i ; p++)
				{
					cout << "*" ;
				}
				cout << endl ;
		}
}

		else if (menu == '2')
		{
			cout << "Input number of line : " ;
			cin >> n ;

			for(int i=1 ; i <= n ; i++)
			{
				for(int p=1 ; p <= i ; p++)
				{
					cout << "*" ;
				}
				cout << endl ;
			}
}

		else if (menu == '3')
		{
			cout << "Input number of line : " ;
			cin >> n ;

			for(int i=1 ; i <= n ; i++)
			{
				for(int p=1 ; p <= i ; p++)
				{
					cout << " " ;
				}
				for(int p = 1 ; p <= 2 * i-1 ; p++)
				{
					cout << "*" ;
				}
				cout << endl ;
		}
}

			else cout << "Invalid Menu!! Please choose again " << endl;
		}	while(menu != '4') ;

		system("pause");
		return(0);
}