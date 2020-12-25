#include<iostream>
using namespace std;
int main(){
	int n,group=1;
	cin>>n;
	int mag[n];
	for(int i=0;i<n;i++){
		cin>>mag[i];
	}
	int curr_mag=mag[0];
	for(int i=1;i<n;i++){
		if(curr_mag!=mag[i]){
			group++;
			curr_mag=mag[i];
		}
	}
	cout<<group;
	return 0;
}
