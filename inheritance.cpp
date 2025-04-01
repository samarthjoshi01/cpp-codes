# include<iostream>
using namespace std;
class academic{
    protected:
    string name;
    int rollno,m1,m2,m3;
    public:
  void getinfo(){
    cout<<"enter the name of the person :";
    getline(cin,name);
    cout<<"enter the rolllno";
    cin>>rollno;

    cout<<"enter the marks in the 3 subjects :";
    cin>>m1>>m2>>m3;

  }
  void showinfo(){
    cout<<"name of the person is"<<name<<endl<<"roll no is"<<rollno;
  }

};

class extracurricular{
    protected:
    int sportsmarks,gpmarks;

public:
 void getmarks(){
    cout<<"enter sportsmarks :";
    cin>>sportsmarks;
    cout<<"enter gp marks";
    cin>>gpmarks; 
 }

};

class result: private academic,protected extracurricular {
    int total;
    public:
    void gettotal(){
        getinfo();
        getmarks();



        total=sportsmarks+gpmarks+m1+m2+m3;
    }
    void showtotal(){
        showinfo();
        cout<<"total marks are"<<total;

    }

};


int main(){

    result p1;
    p1.gettotal();
    p1.showtotal();
    return 0;
}