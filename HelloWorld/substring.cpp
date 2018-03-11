#include<iostream>
#include<string.h>
#include<sstream>
using namespace std;

bool leapyear(int n){
    if (n%4==0 || n%400==0){
        if (n%100!=0) return true;
    }
    return false;
    }
int numofday(int pmonth,int n){
    if (pmonth==1 || pmonth ==3 || pmonth ==5 || pmonth ==7 || pmonth ==8 || pmonth ==10 || pmonth ==12){
        return 31;
    }
    if (pmonth==4 || pmonth ==6 || pmonth ==9 || pmonth ==11){
        return 30;
    }
    if (leapyear(n)== true && pmonth ==2){
        return 29;
    }
    return 28;
    }
int main(){
	istringstream convert;
	string pdate;
	cout<<"Please enter the previous date:";
	getline(cin,pdate);
	int pday;
	istringstream(pdate.substr(0,2)) >> pday;
	int pmonth;
	istringstream(pdate.substr(3,2)) >> pmonth;
	int pyear;
	istringstream(pdate.substr(6,4)) >> pyear;
	string ldate;
	cout<<"Please enter the latest date:";
	getline(cin,ldate);
	int lday;
	istringstream(ldate.substr(0,2)) >> lday;
	int lmonth;
	istringstream(ldate.substr(3,2)) >> lmonth;
	int result;
	result = numofday(pmonth,pyear) - pday + lday;
	cout<<result;
	return 0;
}
