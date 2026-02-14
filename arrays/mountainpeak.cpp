#include<iostream>
#define s 10
using namespace std;
int mpeak(int a[],int n){
    int l=0,u=n-1;
    int mid=(l+u)/2;
    while(l<u){
        mid=(l+u)/2;
        if(a[mid]<a[mid+1])
        l=mid+1;
        else
        u=mid;
    }
    return l+1;
}
int main(){
    int a[s],i,n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter elements of array"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"the peak element is at position"<<mpeak(a,n);
}