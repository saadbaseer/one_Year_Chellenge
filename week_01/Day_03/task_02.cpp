

 //Practice using logical conditions (e.g., check if a number is odd or even).

#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter any whole number "<<endl;
	cin>>num;
	if(num%2==0){
		cout<<"The number you entered is an Even number";
	}
	else{
		cout<<"The number you entered is an Odd number";
	}
	return 0;
}
