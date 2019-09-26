#include "std_lib_facilities.h"

using namespace std;

int main()
{
	int i=1;
	int shift=0;

	while(i!=0)
	{
		i=i<<1;
		shift++;
	}

cout<<shift<<"\n";

return 0;
}
