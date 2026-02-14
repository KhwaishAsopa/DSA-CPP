#include<iostream>
using namespace std;
long long int root(int n){
    int l=0,a;
    long long int u=n;
    long long int mid=(l+u)/2;
    while(l<=u){
        mid=(l+u)/2;
        if(mid*mid==n)
        return mid;
        else if(mid*mid>n)
        u=mid-1;
        else{
        a=mid;
        l=mid+1;
        }
    }
    return a;
}
double precise(int n,int a,int temp){
    double f=1;
    double ans=temp;
    int i;
    for(i=0;i<a;i++){
        f=f/10;
        for(double j=ans;j*j<n;j=j+f){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n,temp;
    double s;
    cout<<"enter the number"<<endl;
    cin>>n;
    temp=root(n);
    s=precise(n,3,temp);
    cout<<"square root of the given number is :"<<s;

}