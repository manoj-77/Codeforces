#include<iostream>
using namespace std;
int main(){
	int count=0,m,n;
	cin>>m>>n;
	while(m<=n){
		m=m*3;
		n=n*2;
		count++;
	}
	cout<<count;
	return 0;
}
