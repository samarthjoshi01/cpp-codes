# include<iostream>
using namespace std;
class dummy{
    public:
int ima;
int real;
dummy(int a=0,int b=0){
    real=a;
    ima=b;

}
 friend dummy operator+(int n,dummy &ob1);
 

void display(){
cout<<real<<"+i"<<ima;
}
};
dummy operator+(int n,dummy &ob1){
dummy temp;
temp.real=n+ob1.real;
temp.ima=0+ob1.ima;
    return temp;
}


int main(){
dummy ob1(100,2),ob2;
    ob2=100+ob1;
    ob2.display();
    return 0;
}
