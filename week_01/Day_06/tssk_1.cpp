//Write a program to display a right-angle triangle pattern of stars (*).
#include<iostream>
using namespace std;
int main(){
	int rows;
	cout<<"enter the rows you want "<<endl;
	cin>>rows;
	for(int i=0;i<rows;i++){
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
