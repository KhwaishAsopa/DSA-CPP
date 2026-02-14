#include<iostream>
define s 10
using namespace std;
int book(int a[],int n,int p){
    int sum=0,i;
    int ans=-1;
    int m=-1;
    for(i=0;i<n;i++)
    m=max(m,a[i]);
    int l=0,u=m;
    int mid=(l+u)/2;
    while(l<=u){
        mid=(l+u)/2;
        if(possible(a,n,p,mid)){
        ans=mid;
        l=mid+1;
        }
        else
        u=mid-1;
    }
    return ans;
int main(){
    int a[s],n,i,f,p;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter elements of array"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter number of cows"<<endl;
    cin>>p;
    f=book(a,n,p);
    cout<<"maximum distance between cows is "<<f;

}
