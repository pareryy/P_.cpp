#include < iostream >
using namespace std;
int main ()
{
	char a,b,c ;
	int p = 0 ;
	int A = 0,B = 0,C = 0 ;
	cout <<"Enter character(A,B,C) : ";
	cin >> c ;
	if (c == 'A')
	{	p +=30 ;
		c +=30 ;
	}
		else if ( c =='B')
	{	p +=20 ;
		b +=20 ;
	}

		else if (c =='C')
	{	p +=30 ;
		c +=30 ;
	}

	cout <<"Enter character(A,B,C) : ";
	cin >> b ;
	if (b =='A')
	{	p += 30 ;
		a += 30 ;
	}

		else if (b =='B')
	{	p += 20 ;
		b += 20 ;
	}

		else if (b =='C')
	{	p +=30 ;
		c +=30 ;
	}

	cout <<"Enter character(A,B,C) : ";
	cin >> c ;
	if (c =='A')
	{	p += 30 ;
		a += 30 ;
	}

		else if (c =='B')
	{	p += 20 ;
		b += 20 ;
	}

		else if (c =='C')
	{	p +=30 ;
		c +=30 ;
	}

	return(0);
}