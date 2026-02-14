<<<<<<< HEAD
#include<iostream>
using namespace std;
bool lsearch(int a[],int n,int x){
    if(n==0)
        return false;
    if(a[0]==x)
        return true;
    bool s=lsearch(a+1,n-1,x);
    return s;
}
int main(){

    int a[10],i,n,x;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter elements of array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"enter element to be searched";
    cin>>x;
    bool s=lsearch(a,n,x);
    if(s==true)
        cout<<"element found";
    else    
        cout<<"element not found";
=======
#include<iostream>
using namespace std;
bool lsearch(int a[],int n,int x){
    if(n==0)
        return false;
    if(a[0]==x)
        return true;
    bool s=lsearch(a+1,n-1,x);
    return s;
}
int main(){

    int a[10],i,n,x;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter elements of array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"enter element to be searched";
    cin>>x;
    bool s=lsearch(a,n,x);
    if(s==true)
        cout<<"element found";
    else    
        cout<<"element not found";
>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}