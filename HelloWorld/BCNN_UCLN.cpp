/*
Giài thuật Euclid:
- Cho 2 số nguyên dương a và b bất kì.
- Tìm UCLN của 2 số nguyên dương đó bằng cách tìm UCLN cùa số nhỏ hơn và hiệu của hai số ban đầu
- Đệ quy cho đến khi a = b = i và i chính là ước chung lớn nhất cùa a và b
*/
#include<iostream>
#include<math.h>
using namespace std;

int UCLN(int a, int b){
    while (a!=b){
        if (a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}
int main(){
    int a,b;
    cout<<"Nhap vao hai so a va b:";
    cin>>a>>b;
    int result = UCLN(a,b);
    cout<<"Uoc chung lon nhat cua a va b la:"<<result<<endl;
    return 0;
    }
