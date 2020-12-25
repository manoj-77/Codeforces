#include<iostream>
using namespace std;
int main(){
	int n,capacity=0,minimum=0,enter,exit;
	cin>>n;
	while(n>0){
		cin>>exit>>enter;
		capacity-=exit;
		capacity+=enter;
		if(minimum<capacity){
			minimum=capacity;
		}
		n--;
	}
	cout<<minimum;
	return 0;
}
