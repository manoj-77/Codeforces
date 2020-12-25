#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	char s[100];
	for(int i=0;i<n;i++){
		cin>>s;
		if(strlen(s)>10){
			cout<<s[0]<<strlen(s)-2<<s[strlen(s)-1]<<endl;
		}
		else{
			cout<<s<<endl;
		}
	}
	return 0;
}
