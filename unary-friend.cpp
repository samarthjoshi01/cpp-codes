# include<iostream>
using namespace std;
class point{
int a,b;
public:
    point(int x=0,int y=0){
        a=x;
        b=y;
}
    void show(){
        cout<<a<<","<<b<<endl;
    }
    friend point operator-(point&);

};

point operator -(point &o){
point temp;
    temp.a=-o.a;
    temp.b=-o.b;
    return temp;
}
int main(){
    point o1(5,9),o2;
    o2=-o1;
    o1.show();
   o2. show();
   return 0;

}