# include<iostream>
using namespace std;


class employee{
    public:
    string name;
    int id;
    int sallary;
    float ts;
    public:
    void getinfo(){
        getchar();
        cout<<"enter employee name";
        getline(cin,name);
        cout<<"enter sallary";
        cin>>sallary;
        cout<<"enter the id";
        cin>>id;
        }
    void total(){
        ts=sallary+0.04*sallary+0.05*sallary;
    }
    void showinfo(){
        cout<<name<<endl<<id<<endl<<ts;
    }
};

void search(employee a[],int n,int id){
int c=0;
    for(int i=0;i<n;i++){
        if(a[i].id==id){
a[i].showinfo();
c++;
        }
    }
       if(c==0)
        cout<<"notfound";
}


int main(){
    int n,id;
    cout<<"enter the number of employees";
    cin>>n;
    employee a[n];
    for(int i=0;i<n;i++){
        a[i].getinfo();
        a[i].total();
    }
    cout<<"enter the id to be searched for";
    cin>>id;
   search(a,n,id);
return 0;

}