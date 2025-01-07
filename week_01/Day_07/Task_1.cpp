//Prime Number Check: Write a program to check if a number is prime.
#include<iostream>
using namespace std;
int main(){
	int num,count;
	cout<<"Enter a number you want to check :"<<endl;
	cin>>num;
	for(int i=1;i<=num;i++){
		if(num%i==0){
		count++;	
		}
	}
	if(count==2){
		cout<<"the number is a prime number ";
	}
	else{
		cout<<"the number is not a prime number";
	}
	return 0;
}
