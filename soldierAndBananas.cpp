#include<iostream>
using namespace std;
int main(){
	long int cost,money,bananas,totalCost=0;
	cin>>cost>>money>>bananas;
	for(int i=1;i<=bananas;i++){
		totalCost+=i*cost;
	}
	if(totalCost>money)
	cout<<totalCost-money;
	else
	cout<<0;
	return 0;
}
