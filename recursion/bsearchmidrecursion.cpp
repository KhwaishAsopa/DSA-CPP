<<<<<<< HEAD
#include<iostream>
using namespace std;
int bsearch(int a[],int s,int e,int x){
    int m;
    if(s>e)
        return -1;
    int mid=(s+e)/2;
    if(a[mid]==x)
        return mid;
    if(a[mid]>x)
        bsearch(a,s,mid-1,x);
    else
        bsearch(a,mid+1,e,x);
    
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
    int m=bsearch(a,0,n-1,x);
    if(m==-1)
        cout<<"element not found";
    else    
        cout<<"element found at index :"<<m;
=======
#include<iostream>
using namespace std;
int bsearch(int a[],int s,int e,int x){
    int m;
    if(s>e)
        return -1;
    int mid=(s+e)/2;
    if(a[mid]==x)
        return mid;
    if(a[mid]>x)
        bsearch(a,s,mid-1,x);
    else
        bsearch(a,mid+1,e,x);
    
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
    int m=bsearch(a,0,n-1,x);
    if(m==-1)
        cout<<"element not found";
    else    
        cout<<"element found at index :"<<m;
>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}