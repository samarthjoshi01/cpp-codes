# include <iostream>
# include <vector>
using namespace std;
bool uniqueOccurrences(vector<int>&a);

 
    int main(){
        vector<int> a;
        cout<<"enter n";
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
        a.push_back(ele);
        }
        bool x=uniqueOccurrences(a);
        cout<<x;
        return 0;
    }
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> b;
    for(int i=0;i<(arr.size());i++){
        if(arr[i]==2000)
        continue;
        int c=1;
       
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[i]==arr[j]){
            c++;
            arr[j]=2000;
            }
        }
        b.push_back(c);


    }
        for(int i=0;i<b.size();i++)
        cout<<b[i]<<endl;

    for(int i=0;i<b.size()-1;i++){
        for(int j=i+1;j<b.size();j++){
            if(b[i]==b[j])
            return false;
        }
    }

    return true;

        
    }