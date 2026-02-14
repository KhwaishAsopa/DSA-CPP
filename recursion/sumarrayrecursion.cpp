<<<<<<< HEAD
#include<iostream>
using namespace std;
int sum(int a[],int n)
{
    int s=0;
    if(n==0)
        return 0;
    if(n==1)
        return a[0];
    s=s+a[0];
    s=s+sum(a+1,n-1);
    
    return s;
}
int main(){
    int n,s;
    int a[10];
    cout<<"enter size";
    cin>>n;
    cout<<"enter elements";
    for(int i=0;i<n;i++)
        cin>>a[i];
    s=sum(a,n);
    cout<<"sum of the elements is: "<<s;
=======
#include<iostream>
using namespace std;
int sum(int a[],int n)
{
    int s=0;
    if(n==0)
        return 0;
    if(n==1)
        return a[0];
    s=s+a[0];
    s=s+sum(a+1,n-1);
    
    return s;
}
int main(){
    int n,s;
    int a[10];
    cout<<"enter size";
    cin>>n;
    cout<<"enter elements";
    for(int i=0;i<n;i++)
        cin>>a[i];
    s=sum(a,n);
    cout<<"sum of the elements is: "<<s;
>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}