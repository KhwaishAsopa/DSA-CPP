<<<<<<< HEAD
#include<iostream>
using namespace std;
bool bsearch(int a[],int s,int e,int x){
    bool m;
    if(s>e)
        return false;
    int mid=(s+e)/2;
    if(a[mid]==x)
        return true;
    if(a[mid]>x)
        m=bsearch(a,s,mid-1,x);
    else
        m=bsearch(a,mid+1,e,x);
    return m;
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
    bool m=bsearch(a,0,n-1,x);
    if(m==true)
        cout<<"element found";
    else    
        cout<<"element not found";
=======
#include<iostream>
using namespace std;
bool bsearch(int a[],int s,int e,int x){
    bool m;
    if(s>e)
        return false;
    int mid=(s+e)/2;
    if(a[mid]==x)
        return true;
    if(a[mid]>x)
        m=bsearch(a,s,mid-1,x);
    else
        m=bsearch(a,mid+1,e,x);
    return m;
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
    bool m=bsearch(a,0,n-1,x);
    if(m==true)
        cout<<"element found";
    else    
        cout<<"element not found";
>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}