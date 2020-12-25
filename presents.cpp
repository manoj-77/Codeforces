#include<iostream>
using namespace std;
int main(){
	int n,j=1;
	cin>>n;
	int a[n],rearrange[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		rearrange[a[i]-1]=j++;
	}
	for(int i=0;i<n;i++)
	cout<<rearrange[i]<<" ";
	return 0;
}
