#include<iostream>
#include<math.h>
using namespace std;

bool Tamgiac(double a, double b, double c){
    if ((a==0) || (b==0) || (c==0)){
        cout<<"Khong phai la tam giac"<<endl;
        return false;
        }
    else{
        if ((a+b>c) && (a+c>b) && (b+c>a)){
            cout<<"La tam giac"<<endl;
            return true;
        }
        else{
            cout<<"Khong phai la tam giac"<<endl;
            return false;
        }
    }
}
int main(){
    double x,y,z;
    cout<<"Nhap vao ba canh a,b,c:"<<endl;
    cin>>x>>y>>z;
    if (Tamgiac(x,y,z) == true){
        double P = x+y+z;
        cout<<"Chu vi cua tam giac la:"<<P<<endl;
    }
    return 0;
}
