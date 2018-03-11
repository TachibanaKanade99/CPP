#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	int i;
	cout<<"Nhap vao n:";
	cin>>n;
	for (i=1;i<=10;i++){
		int tich = n*i;
		cout<<n<<"*"<<i<<"="<<tich<<endl;
		tich++;
	}
	return 0;
}
