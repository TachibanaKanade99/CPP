#include<iostream>
using namespace std;
int a = 10;
int b = 20;

int main(){
	// Toán tử trong CPP:
	//Toán tử số học:(Arithmetich Operator)
		//Phép cộng:
		int tong = a +b;
		cout<< tong<<endl;
		//Phép nhân:
		int tich = a*b;
		cout<< tich<<endl;
		//Phép chia lấy phần nguyên:
		int chia_nguyen = a / b;
		cout<< chia_nguyen<<endl;
		//Phép chia lấy phần dư:
		int chia_du = a % b;
		cout<< chia_du<<endl;
		//Toán tử tăng giá trị lên một đơn vị:
		int c = a--;
		cout<< c <<endl;
		//Toán tử giảm giá trị đi một đơn vị:
		int a2 = a++;
		cout<< a2<<endl;
	//Toán tử quan hệ:(Relational Operator)
	//Phép tương đương:
		if (a == b) cout<<"a bang b"<<endl;
		if (a <= b) cout<<"a be hon hoac bang b"<<endl;
		if (a >= b) cout<<"a lon hon hoac bang b"<<endl;
		if (a < b) cout<<"a be hon b"<<endl;
		if (a > b) cout<<"a lon hon b"<<endl;
	//Toán tử logic:(Logical Operator)
		//Phép AND:
		int AND = a && b;
		cout<<AND<<endl;
		//Phép OR:
		int OR = a || b;
		cout<<OR<<endl;
		// Phép phủ định:
		int NOT1 = !a;
		cout<<NOT1<<endl;
		int NOT2 = !b;
		cout<<NOT2<<endl;
	//Toán tử gán:(Assignment Operator)
		//Phép gán cộng
		int cong = a+=b; 
		cout<<cong<<endl;
		//Phép gán trừ
		int tru = a-=b;
		cout<<tru<<endl;
		//Phép gán nhân
		int nhan = a*=b;
		cout<<nhan<<endl;
		//Phép gán chia
		int chia = a/=b;
		cout<<chia<<endl;
		//Phép gán chia lấy phần dư
		int chia_lay_du = a%=b;
		cout<<chia_lay_du<<endl;
	//Toán tử hỗn hợp:(Misc Operator)
		//Lấy kich thước của biến theo bit
		int e = 12;
		cout<<sizeof(e)<<endl;
	return 0;
}