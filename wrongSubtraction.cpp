#include<iostream>
using namespace std;
int main(){
	int num,k;
	cin>>num>>k;
	while(k>0){
		if(num%10==0)
		num=num/10;
		else
		num--;
		k--;
	}
	cout<<num;
	return 0;
}
