#include<iostream>
#define s  10
using namespace std;
bool possible(int a[],int n,int p,int mid){
    int i,psum=0;
    int st=1;
    for(i=0;i<n;i++){
        if(psum+a[i]<=mid)
        psum+=a[i];
        else{
        st++;
        if(st>p || a[i]>mid)
        return false;
        psum=a[i];
        }
        
    }
    return true;
}
int book(int a[],int n,int p){
    int sum=0,i;
    int ans=-1;
    for(i=0;i<n;i++)
    sum=sum+a[i];
    int l=0,u=sum;
    int mid=(l+u)/2;
    while(l<=u){
        mid=(l+u)/2;
        if(possible(a,n,p,mid)){
        ans=mid;
        u=mid-1;
        }
        else
        l=mid+1;
    }
    return ans;
    
}
int main(){
    int a[s],n,i,f,p;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter elements of array"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter number of students"<<endl;
    cin>>p;
    f=book(a,n,p);
    cout<<"minimum no of pages is "<<f;

}