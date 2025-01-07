//Factorial Calculation: Write a program to find the factorial of a number using aloop.
#include<iostream>
using namespace std;
int main(){
	int num;
	int sum=1;
	cout<<"enter a number "<<endl;
	cin>>num;
	
	for(int i=1;i<=num;i++){
		sum=sum*i;
	}
	cout<<"the factorial of the given number is :"<<sum;
	return 0;
}
