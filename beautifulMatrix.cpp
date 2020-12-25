#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a[5][5],one_row,one_col;
	for(int i=0;i<5;i++){
		for (int j=0;j<5;j++){
			cin>>a[i][j];
			if(a[i][j]==1){
				one_row=i;
				one_col=j;
			}
		}		
	}
	cout<<abs(2-one_row)+abs(2-one_col);
	return 0;
}
