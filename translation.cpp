#include<iostream>
using namespace std;
int main(){
	string first,reverse,copy;
	cin>>first>>reverse;
	int n=first.length()-1;
	for(int i=n;i>=0;i--){
		copy+=first[i];
	}
	if(copy==reverse)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
