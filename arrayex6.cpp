#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
string check_val(int x);
int main()
{
	int num[4],total = 0,max = 0,min;
	string name[4];
	for(int i = 0;i < 4; i++) //i<=3 input array
	{	cout << " Enter Name ["<<i<<"] : ";
		cin >> name[i];
		cout << " Enter Score ["<<i<<"] : ";
		cin >> num[i];
	}
	cout << setfill('-') << setw(50) << " " <<endl;
	cout << "Neme \t \t Score \t\t Result"<<endl;
	cout << setfill('-') << setw(50) << " " <<endl;
	min = num[0];
	for(int i = 0;i < 4; i++) //i<=3 display array
	{	cout << name[i] <<"\t\t"<< num[i]<<"\t\t"<<check_val(num[i])<<endl;
		total = total+num[i];
		if(num[i] > max)
			max = num[i];
		if(num[i] < min)
			min = num[i];
	}
	cout << setfill('-') << setw(30) << " " <<endl;
	cout << "Max Score = "<< max <<endl;
	cout << "Min Scoro = "<< min <<endl;
	cout << "Total     = "<< total <<endl;
	cout << "Average  = "<< (float)total/4 <<endl;
	system("pause");
	return(0);
}
string check_val(int x)
{
	if(x >= 50)
		return("pass");
	else
		return("Failed");
}