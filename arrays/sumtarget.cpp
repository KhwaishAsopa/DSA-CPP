#include<iostream>
using namespace std;
void check(int arr[],int n,int t,int *a,int *b){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==t)
            {
                *a=i;
                *b=j;
            }
        }
    }
}
int main(){
    int n,t,a,b;
    int arr[10];
    cout<<"enter size";
    cin>>n;
    cout<<"enter elements";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"enter target";
    cin>>t;
    
    check(arr,n,t,&a,&b);
    cout<<"required indices are :"<<a<<" and "<<b;
}