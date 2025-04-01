# include<iostream>
using namespace std;
class A{
public:
int amul(int a){
    return a*2;
}
};
class B{
public:
int bmul(int a){
    return a*3;
}
};
class C{
public:
int cmul(int a){
    return a*5;
}
};
class D: public A, public B, public C{
private:
int val=1;
int a_count=0,b_count=0,c_count=0;
public:
void update_val(int x){
    while(x!=1){
        if(x%2==0){
            val=amul(val);
            a_count++;
            x/=2;
        }
        if(x%3==0){
            val=bmul(val);
            b_count++;
            x/=3;
        }
        if(x%5==0){
            val=cmul(val);
            c_count++;
            x/=5;
        }
    }
cout<<"A is called "<<a_count<< "times"<<endl;
cout<<"B is called "<<b_count<< "times"<<endl;
 cout<<"C is called "<<c_count<< "times"<<endl;
}
};
int main(){
D ob1;
ob1.update_val(30);
return 0;
}