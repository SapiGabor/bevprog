#include "std_lib_facilities.h"

using namespace std;

int main() {

//drill4.1
	double value1=0, value2=0, valtozo;
	while(cin>>value1>>value2)
	{
		
		cout<<"Please type a number: ";
		cin>>value1;
		cout<<"Please type another number: ";
		cin>>value2;
		cout<<"A két változó: "<<value1<<" "<<value2<<"\n";
	}	
//drill4.2,3
	string smaller="the smaller value is: ";
	string greater="the larger value is: ";
	if(value1>value2)
	{
		cout<<" "<<smaller<<" "<<value2<<" "<<greater<<" "<<value1<<"\n";
	}
	else if(value1<value2)
	{
		cout<<" "<<smaller<<" "<<value1<<" "<<greater<<" "<<value2<<"\n";
	}
	else if(value1==value2)
	{
		cout<<"The two numbers are equal\n";
	}
//drill4.5
	if((value1-value2)<(1.0/100))
	{
		cout<<"The two numbers are almost equal.";
	}
//drill4.6
	
	int minn=0;
	int maxn=0;
	/*	while(cin>>value1)
	{
		
		cout<<"Please type a number: ";
		cin>>value1;
		if(value1 < minn)
		{
			minn=value1;
			cout<<"The smallest so far.";
		}	
		
		if(value1 > maxn)
		{
			maxn=value1;
			cout<<"The largest so far.";
		}
	}	
	*/
//drill4.7
	string unit="";
	cout<<"What's the unit?(in=Inch, m=Meters, ft=Feet)";
	cin>>unit;
	//value1+" "+unit;
	//value2+" "+unit;
//drill4.9
	int min_max_osszeg=0;
	min_max_osszeg=maxn+minn;

//drill4.10-11
	/*int t[0];
	sort(t);
	std::cout<<"\n";
	for(int i=0;i<t.size();i++){
		std::cout<<t[i]<<" ";
	}
	return 0;*/
}
