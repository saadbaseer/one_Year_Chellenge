//Create a multiplication table for a given number.
#include<iostream>
using namespace std;
int main(){
	int num;
	int i=1;
	cout<<"Enter the number you want table of"<<endl;
	cin>>num;
	while(i<=10){
		cout<<num<<"X"<<i<<"="<<num*i<<endl;
		i++;
	}
return 0;
}
