 
// Write a program to accept user input and display it. 
#include <iostream>
using namespace std;
int main(){
	string user_input;

	cout<<"enter your name"<<endl;
//getline(cin,user_input);
cin>>user_input;
	
	cout<<"your name is "<<user_input;
	return 0;
}
