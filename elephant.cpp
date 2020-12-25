#include<iostream>
using namespace std;
int main(){
	long int x,steps;
	cin>>x;
	if(x<=5)
	cout<<1;
	else{
		steps=x/5;
		if(x%5==0)
		cout<<steps;
		else
		cout<<steps+1;
	}
	return 0;
}
