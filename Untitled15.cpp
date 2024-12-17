#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int vorood (   );
int inc ( int  );

main()
{

	int x;
	
	x = vorood();
	cout<< inc(x);
}

int vorood ()
{
	int a;
	do 
	{
		cout<<endl<<"enter : ";
		cin>>a;
	}
	while ( a < 0 );
	
	return a;
}

int inc ( int c )
{
	return c + 1;
}
