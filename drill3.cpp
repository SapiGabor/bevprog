#include "std_lib_facilities.h"

using namespace std;

int main() {

//drill3.1


	cout<<"Please enter your first name\n";
	string first_name;
	cin>> first_name;
	cout<<"Hello," <<first_name<<'\n';
	cout<<"Enter the name of the person you want to write to\n";
	cin>> first_name;
	cout<<"Dear " <<first_name<< ",\n";
//drill3.2
	cout<<"How are you? I am fine. I miss you.\n";
	
//drill3.3
	cout<<"Enter another name (your friend's name!)\n";
	string friend_name;
	cin>> friend_name;
	cout<<"Have you see "<<friend_name<<" lately?";
//drill3.4
	char friend_sex='0';
	cout<<"Friend sex? (f (female) or m(male)): ";
	cin>>friend_sex;
	if (friend_sex == 'm')
	{
		cout<<"If you see "<<friend_name<<" please ask him to call me.";
	}
	else
	{	
		cout<<"If you see "<<friend_name<<" please ask her to call me.";
	}
//drill3.5
	cout<<"How old is your friend?\n";
	int friend_age=0;
	cin>> friend_age;
	cout<<"I hear you just had a birthday and you are "<<friend_age<<" years old.";
	if(friend_age<0 || friend_age>110)
	{
		simple_error("You're kidding!");
	}
//drill3.6
	if(friend_age<12)
	{
		friend_age+=1;
		cout<<"Next year you will be "<<friend_age<<".";
	}
	else if(friend_age==17)
	{
		cout<<"Next year you will be able to vote.";
	}
	else if(friend_age>70)
	{
		cout<<"I hope you are enjoying retirement.";
	}
//drill3.7
	cout<<"Yours sincerely,";
	cout<<"Gábor\n";

}

