# include<iostream>
using namespace std;
class post{
    
int a;
public:
post(int x=0){
    a=x;

}
void display(){
    cout<<a<<endl;

}
friend post operator++(post&,int);



};
post operator++(post& o,int x){
    post temp;
    temp.a=o.a++;
    return temp;

}
int main(){

    post o1(5),o2;
    o2=operator++(o1,0);//o2=operator++(o1,0)
    o2.display();
    o1.display();
}
