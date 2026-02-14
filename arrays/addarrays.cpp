#include<iostream>
#define size 10
using namespace std;
void reverse(int c[],int k){
    int s=0;
    int e=k-1;
    while(s<=e){
        swap(c[s],c[e]);
        s++;
        e--;
    }
}
void addarray(int a[],int n,int b[],int m){
    int i=n-1;
    int k=0;
    int j=m-1;
    int c[size];
    int carry=0;
    while(i>=0 && j>=0){
        int v1=a[i];
        int v2=b[j];
        int sum=v1+v2+carry;
        carry=sum/10;
        sum=sum%10;
        c[k]=sum;
        i--;
        j--;
        k++;
    }
    while(i>=0){
        int sum=b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        c[k]=sum;
        j--;
        k++;
    }
    while(j>=0){
        int sum=a[i]+carry;
        carry=sum/10;
        sum=sum%10;
        c[k]=sum;
        i--;
        k++;
    }
    while(carry!=0){
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        c[k]=sum;
        k++;
    }
    reverse(c,k);
    for(i=0;i<k;i++)
    cout<<c[i];
}

int  main(){
    int a[size],b[size],n,m,i;
    cout<<"enter size of array 1";
    cin>>n;
    cout<<"enter elements of array 1";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter size of array 2";
    cin>>m;
    cout<<"enter elements of array 2";
    for(i=0;i<m;i++)
    cin>>b[i];
    addarray(a,n,b,m);
    

}