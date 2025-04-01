# include<iostream>
using namespace std;

void add (int a ,int b){
    float c=a+b;
    cout<<"first"<<c;
}
/*void add (float a ,int b){
    float c=a+b;
    cout<<"second"<<c;
}*/
void add (float a ,float b){
    float c=a+b;
    cout<<"third"<<c;
}
void add (float a ,int b){
    float c=a+b;
    cout<<"third"<<c;
}
int main(){

    float a=2.5;
    int b=4;
    add(a,b);
     
    return 0;

}