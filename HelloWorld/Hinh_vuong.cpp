#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a,i,j;
	cout<<"Nhap vao a:"<<endl;
	cin>>a;
	for (i = 1;i <= a;i++){
		for (j = 1;j <= a;j++)
			cout<<"* ";
			cout<<"\n";
	}
	return 0;
}