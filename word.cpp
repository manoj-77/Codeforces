#include<bits/stdc++.h>
using namespace std;
int main(){
	int up=0,lo=0;
	string s;
	cin>>s;
	int n=s.length();
	for(int i=0;i<n;i++){
		if(isupper(s[i]))
		up++;
		else
		lo++;
	}
	if(up>lo)
	for(int i=0;i<n;i++)
	s[i]=toupper(s[i]);
	else
	for(int i=0;i<n;i++)
	s[i]=tolower(s[i]);
	cout<<s;
	return 0;
}
