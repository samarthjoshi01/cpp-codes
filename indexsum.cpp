# include<iostream>
# include<limits>
using namespace std;
int indexsum(int[],int);
int main()
{
   int a[50];
   int s;
   cout<<"enter size";
   cin>>s;
   for(int i=0;i<s;i++)
   cin>>a[i];
   int ans= indexsum(a,s);
   cout<<"ans is :"<<ans;
   return 0;
}
int indexsum(int a[],int s){
    for(int i=0;i<s;i++){
        int curr=i;
        int sum=a[curr++];
        int t=2;
        while(s-curr>=t){
            for(int i=1;i<=t;i++)
            sum+=a[curr++];
            t++;
        }
        a[i]=sum;
    }
     int max=a[0];
    for(int i=1;i<s;i++){
       
        if(a[i]>max)
        max=a[i];

    }
    return max;

}