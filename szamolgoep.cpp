#include "std_lib_facilities.h"
void calculate(){
cout<<"Add meg a szamokat, es az operatorokat(+,-,/,*)\n";
double d,a,b;
double c=0;
char op;
if(cin){
cin>>a>>op>>b;
switch(op){
    case '+' : c=(double)a+(double)b; cout<<"Eredmeny: "<<c<<"\n"; break;
    case '-' : c=a-b; cout<<"Eredmeny: "<<c<<"\n"; break;
    case '/' : c=a/b; if (b==0) error("0-val nem osztunk\n"); else cout<<"Eredmeny: "<<c<<"\n"; break;
    case '*' : c=a*b; cout<<"Eredmeny: "<<c<<"\n"; break;
    case 'q' : exit(0); break;
    default :  error("Nincs ilyen \n"); break;
    }
}
while(cin){
cin>>op>>d;
switch(op){
    case '+' : c+=d; cout<<"Eredmeny: "<<c<<"\n"; break;
    case '-' : c-=d; cout<<"Eredmeny: "<<c<<"\n"; break;
    case '/' : if (d==0) error("0-val nem osztunk\n"); else {c/=d; cout<<"Eredmeny: "<<c<<'\n';} break;
    case '*' : c*=d; cout<<"Eredmeny: "<<c<<"\n"; break;
    case 'q' : exit(0); break;
    default:   error("Nincs ilyen lehetoseg\n"); break;
    }
}

cout<<"Vegeredmeny: "<<c;

}
int main(){
try{
	calculate();
	keep_window_open();
        return 0;
	}

	catch (exception& e) {
		cerr << "Hiba: " << e.what() << endl;
		keep_window_open();
		return 1;
	}
	catch (...) {
		cerr << "Hiba\n";
		keep_window_open();
		return 2;
	}

}
