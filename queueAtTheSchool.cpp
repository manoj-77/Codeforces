#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	char g[n];
	cin>>g;
	while(k--){
	for(int i=1;i<n;i++){
		if(g[i]=='G' && g[i-1]=='B'){
			g[i-1]='G';
			g[i]='B';
			i++;
		}
	}
	}
	cout<<g;
	return 0;
}
