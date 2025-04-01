# include<iostream>
using namespace std;
class assign{

    int a,b;
    public:
    assign (int x=0,int y=0){
        a=x,b=y;


    }
    void show(){
        cout<<a<<endl<<b<<endl;
    }
     void operator=(assign &o){
        a=o.a;
        b=o.b;

     }

};



int main(){

    assign o1(5,10),o2;
   o2=o1; //o2.operator=(o1)
    o2.show();
}