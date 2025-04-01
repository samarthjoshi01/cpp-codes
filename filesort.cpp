# include<iostream>
# include<fstream>
# include<vector>
# include<algorithm>
using namespace std;

int main(){
    vector<int>a;
    ofstream out;
    out.open("sam.txt");
    out<<"data\n";
     cout<<"enter data";
    for(int i=0;i<5;i++){
       
        int d;
        cin>>d;
    out<<d<<" ";
   
    }
     out.close();
    ifstream in;
    in.open("sam.txt");
    string header;
    in >> header;
    while(!in.eof()){
        int c=in.get();
     
        a.push_back(c);
    }
    for(int i=0;i<5;i++){
        cout<<a[i];
    }
     sort(a.begin(),a.end());
       out.open("sam.txt", ios::app);
      out<<"\nsorteddata\n";
    for(int i=0;i<5;i++){
       
    out<<a[i]<<" ";
    
    }
    out.close();
    return 0;
}
