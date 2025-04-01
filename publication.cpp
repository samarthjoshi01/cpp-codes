# include<iostream>
using namespace std;
class publication{
    public:
    string title;
    publication(string title){
        this->title=title;
    }
    void showinfo(){
cout<<"title is :"<<title<<endl;
    }

};
class book: virtual public publication{
int acc_no;
public:
book(string s,int acc_no):publication(s){
    this->acc_no=acc_no;

}
 void showinfo(){
    publication::showinfo();

cout<<"Acession no is :"<<acc_no<<endl;
    }

};
class Magazine: virtual public publication{
int vol_no;
public:
Magazine(string title,int vol_no ):publication(title){
    this->vol_no=vol_no;
}
void showinfo(){
    publication::showinfo();

cout<<"volume no is"<<vol_no<<endl;
    }
};
class Journal:public book,public Magazine{
    public:
    Journal(string s,int a,int b):Magazine(s,b),book(s,a),publication(s){}
    void showinfo(){
        publication::showinfo();
       book::showinfo();
Magazine::showinfo();
   }
};
int main(){
Journal book1("Game of thrones",600,50);
book1.showinfo();
return 0;
}