<<<<<<< HEAD
#include<iostream>
using namespace std;
bool bsearch(int a[],int n,int x){
    bool s;
    if(n==0)
        return false;
    int mid=(1+n)/2;
    if(a[mid]==x)
        return true;
    if(a[mid]>x)
        s=bsearch(a,mid-1,x);
    else
        s=bsearch(a+mid,n,x);
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
    bool s=bsearch(a,n,x);
    if(s==true)
        cout<<"element found";
    else    
        cout<<"element not found";
=======
#include<iostream>
using namespace std;
bool bsearch(int a[],int n,int x){
    bool s;
    if(n==0)
        return false;
    int mid=(1+n)/2;
    if(a[mid]==x)
        return true;
    if(a[mid]>x)
        s=bsearch(a,mid-1,x);
    else
        s=bsearch(a+mid,n,x);
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
    bool s=bsearch(a,n,x);
    if(s==true)
        cout<<"element found";
    else    
        cout<<"element not found";
>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}