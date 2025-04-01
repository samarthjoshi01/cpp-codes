# include <iostream>
using namespace std;
class dummy{
private:
int a1,b1;
public:
dummy(int c=0,int d=0){
    a1=c;
    b1=d;
}

 friend  void assign(dummy&,dummy&);
public:
void display(){
cout<<a1<<endl<<b1;
}
};
void assign(dummy&ob1,dummy&ob2){
ob1.a1=ob2.a1;
ob1.b1=ob2.b1;

}
int main(){
dummy a,b(3,5);
a.display();
cout<<endl;
a=b;
  a.display();
  

    return 0;
}