#include<iostream>
using namespace std;
int main(){
	int n,counta=0,countd=0;
	string match;
	cin>>n;
	cin>>match;
	for(int i=0;i<n;i++){
		if(match[i]=='A')
		counta++;
		else
		countd++;
	}
	if(counta<countd)
	cout<<"Danik";
	else if(counta>countd)
	cout<<"Anton";
	else
	cout<<"Friendship";
	return 0;
}
