#include<iostream>
#define s 10
using namespace std;
int fo(int a[],int n,int k){
    int l=0;
    int ans=-1;
    int u=n-1;
    int mid=(l+u)/2;
    while(l<=u){
        mid=(l+u)/2;
        if(a[mid]==k){
            ans=mid;
            u=mid-1;
        }
        else if(a[mid]>k)
        u=mid-1;
        else
        l=mid+1;
        
        
    }
    return ans+1;
}
int lo(int a[],int n,int k){
    int i,l=0;
    int ans=-1;
    int u=n-1;
    int mid=(l+u)/2;
    while(l<=u){
        mid=(l+u)/2;
        if(a[mid]==k){
            ans=mid;
            l=mid+1;
        }
        else if(a[mid]>k)
        u=mid-1;
        else
        l=mid+1;
        
        
    }
    return ans+1;
    
}
int main(){
    int a[s],i,n,k;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter elements of array"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter element for which occurence has to checked"<<endl;
    cin>>k;
    cout<<"first occurence of the given element is at position"<<fo(a,n,k)<<endl;
    cout<<"last occurence is at position"<<lo(a,n,k)<<endl;


}