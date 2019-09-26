#include "std_lib_facilities.h"

using namespace std;

int main()
{
	int a=0, b=0;
	cout<<"Adj meg ket valtozot: \n";
	cin>>a>>b;
	
	cout<<"1.valtozo = "<<a<<"\n";
	cout<<"2.valtozo = "<<b<<"\n";

	a=a^b;
	b=a^b;
	a=a^b;

	cout<<"A csere vegen: \n";
	cout<<"1.valtozo = "<<a<<"\n";
	cout<<"2.valtozo = "<<b<<"\n";

	return 0;
}
