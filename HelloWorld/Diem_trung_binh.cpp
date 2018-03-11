#include<iostream>
#include<math.h>
using namespace std;

int main(){
	string HT;
    cout<<"Nhap vao ho va ten:"<<endl;
    getline(cin,HT);
    float t;
    cout<<"Nhap vao diem toan:"<<endl;
    cin>>t;
    if (t>10){
        cout<<"Yeu cau nhap lai diem"<<endl;
        return 0;
    }
    else{
    float v;
    cout<<"Nhap vao diem van:"<<endl;
    cin>>v;
    if (v>10){
        cout<<"Yeu cau nhap lai:"<<endl;
        return 0;
    }
    else{
    double dtb = (t+v)/2;
    cout<<HT<<endl;
    cout<<"Diem trung binh cua ban la:"<<dtb<<endl;
    return 0;
    }
    }
}


