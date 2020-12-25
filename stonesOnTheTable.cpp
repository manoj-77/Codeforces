#include<iostream>
using namespace std;
int main(){
	int n,count=0;
	cin>>n;
	char colors[n];
	cin>>colors;
	for(int i=1;i<n;i++){
		if(colors[i]==colors[i-1]){
			count++;
		}
	}
	cout<<count;
	return 0;
}
