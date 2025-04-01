# include<iostream>
using namespace std;
class post{
    int a;
    public:
    post(int x=0){
        a=x;
        }
    void show(){
        cout<<a<<endl;
    }
    friend post operator++(post&,int);

};

post operator ++(post &o,int){
post temp;

    temp.a=o.a++; 
    return temp;
}
int main(){
    post o1(5),o2;
   
    o2=o1++;
   o2. show();
   o1.show();
   return 0;

}