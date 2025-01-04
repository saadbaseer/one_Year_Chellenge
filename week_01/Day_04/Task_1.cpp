//Write a program to find the largest among three numbers.
#include<iostream>
using namespace std;
int main(){
	int n_1,n_2,n_3;
	cout<< "Enter three numbers"<<endl;
	cin>>n_1>>n_2>>n_3;
	if(n_1>n_2&&n_1>n_3){
		cout<< "The gretest number is :"<<n_1;
	}
	else if(n_2>n_1 && n_2>n_3){
	cout<< "The gretest number is :"<<n_2;
	}
	else{
		cout<<"The greatest number is :"<<n_3;
	}
	return 0;
}
