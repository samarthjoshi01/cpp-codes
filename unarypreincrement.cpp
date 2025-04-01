# include<iostream>
using namespace std;
class pre{
    int a;
    public:
    pre(int x=0){
    a=x;
    }

   friend pre operator--(pre & );
       
void show(){
    cout<<a<<endl;
}

};


pre operator--( pre &o){
        pre temp;
        temp.a=--o.a;
        return temp;

    }
int main(){

    pre o1(9),o2;

    o2=--o1;//operator--(o1);
    
    o2.show();
     o1.show();
return 0;
}