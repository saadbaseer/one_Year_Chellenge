
//Create a simple calculator using switch for operations.

#include<iostream>
using namespace std;
int main(){
	float n1,n2;
	char choise;
	cout<<"Enter two numbers "<<endl;
	cin>>n1>>n2;
		cout<<"choose an operator in +,-,*,/ "<<endl;
	cin>>choise;
	switch(choise){
		case '+':
			cout<<"the sum of two numbers is :"<<n1+n2<<endl;
			break;
		case '-':
			cout<<"the subtraction of two numbers is :"<<n1-n2<<endl;
			break;
		case '*':
			cout<<"the probuct of two numbers is :"<<n1*n2<<endl;
			break;
		case '/':
			if(n2!=0){
			cout<<"the division of two numbers is :"<<n1/n2<<endl;
			break;
		}
		else{
		cout<<"undefined you cannot divide any number by zero";
		break;
		}
		
		default:
			cout<<"choose the correct operator";
	}

	return 0;
}
