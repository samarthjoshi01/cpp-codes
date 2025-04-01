# include<iostream>
using namespace std;
void check(int);
int main(){
    int n;
cout<<"enter the no :";
cin>>n;
check(n);
return 0;
}
void check(int n){
    int no=n;
    int sd=0,pd=1,sum=0,d;
    while(no!=0){
        d=no%10;
        sd+=d;
        pd*=d;
        no/=10;
}
    sum=sd+pd;
    if(sum==n)
    cout<<"special 2-digit number";
    else 
    cout<<"not a special 2-digit number";
    }
