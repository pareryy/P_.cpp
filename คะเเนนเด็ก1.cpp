#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void Input(int &numS,int Quiz[10],int Mid[10],int Final[10]);
void ViewAll(int &numS,int Quiz[10],int Mid[10],int Final[10]);
void ViewID(int &numS,int Quiz[10],int Mid[10],int Final[10]);
int main()
{	
	int numS = 0;
	int Quiz[10],Mid[10],Final[10];
	char menu;
	do{
		cout << "Exercise :" <<endl;
		cout << "===========================" <<endl;
		cout << "            MENU           " <<endl;
		cout << "===========================" <<endl;
		cout << " 1.Input student records" <<endl;
		cout << " 2.View all student records" <<endl;
		cout << " 3.Show a student by ID" <<endl;
		cout << " 4.Exit" <<endl;
		cout << "Select menu : ";
		cin >> menu;
		if(menu == '1')
		{
			Input(numS,Quiz,Mid,Final);
		}
		else if(menu == '2')
		{
			ViewAll(numS,Quiz,Mid,Final);
		}
		else if(menu == '3')
		{
			ViewID(numS,Quiz,Mid,Final);
		}

	}while(menu != '4');

		system("pause");
		return(0);
}
void Input(int &numS,int Quiz[10],int Mid[10],int Final[10])
{
	cout << "Input Number of student : ";
	cin >> numS;
	for(int i = 0; i < numS; i++)
	{
		cout << "Number" << i+1 <<endl;
		cout << "Input Quiz : ";
		cin >> Quiz[i];
		cout << "Input Midterm : ";
		cin >> Mid[i];
		cout << "Input Final : ";
		cout << endl;
	}
}
void ViewAll(int &numS,int Quiz[10],int Mid[10],int Final[10])
{
	cout << "------------------------------" <<endl;
	cout << "StdID   Quiz   Midterm   Final" <<endl;
	cout << "------------------------------" <<endl;
	for(int i = 0;i < numS; i++)
	{
		cout << i+1<<setw(9)<<Quiz[i]<<setw(9)<<Mid[i]<<setw(9)<<Final[i]<<endl;
	}
	cout << "------------------------------" <<endl;
}
void ViewID(int &numS,int Quiz[10],int Mid[10],int Final[10])
{
	int id;
	cout << "Input ID : ";
	cin >> id;
	for(int i = 0; i < numS; i++)
	{
		if(id == i+1)
		{	cout << "------------------------------" <<endl;
			cout << "StdID   Quiz   Midterm   Final" <<endl;
			cout << "------------------------------" <<endl;
			cout << i+1<<setw(9)<<Quiz[i]<<setw(9)<<Mid[i]<<setw(9)<<Final[i]<<endl;
			cout << "------------------------------" <<endl;
		}else
		{
			cout << "Your ID is nit found " <<endl;
		}
		break;
	}
}