/*Combine all learned concepts in a mini-project (e.g., a menu-driven program that
allows the user to perform basic arithmetic operations).*/
#include<iostream>
using namespace std;
int main(){
	int choise;
	int sum=1;
	int num;
	cout<<"1.program to see the factorial of a number "<<endl;
	cout<<"X-------X-------X-------X--------X-------X---------X"<<endl;
	cout<<"2.program to see wheather a number is prime or not "<<endl;
	cout<<"X-------X-------X-------X--------X-------X---------X"<<endl;
	cout<<"3.program to see the reverse order of a number"<<endl;
	cout<<"X-------X-------X-------X--------X-------X---------X"<<endl;
	cout<<"enter your choise"<<endl;
	cin>>choise;
	switch(choise){
		case 1:
	cout<<"enter a number "<<endl;
	cin>>num;
	
	for(int i=1;i<=num;i++){
		sum=sum*i;
	}
	cout<<"the factorial of the given number is :"<<sum;
	break;
	case 2:
		cout<<"Enter a number :"<<endl;
		cin>>num;
		sum=0;
		for(int i=1;i<=num;i++){
			if(num%i==0){
				sum++;
			}
			}
		if(sum==2){
			cout<<"The number is a prime number";
		}
		else{
			cout<<"The number is not a prime number";
			}
		break;
	case 3:
		float a1,a2,a3;
		cout<<"Enter Three Angles Of a Triangle : ";
			cin>>a1>>a2>>a3;
			if((a1+a2+a3)==180){
				cout<<"Triangle Is Valid"<<endl;
			}else{
				cout<<"Triangle Is Not Valid"<<endl;
			}
			break;
			default:
				cout<<"Enter 1,2,3,4 only";
	}
	return 0;
}
