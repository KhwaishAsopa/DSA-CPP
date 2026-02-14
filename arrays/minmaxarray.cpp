#include<iostream>
#include<climits>
#define s 10
using namespace std;
int maximum(int a[],int n){
    int i;
    int m=INT_MIN;
    for(i=0;i<n;i++){
        if(a[i]>m)
            m=a[i];

    }
    return m;
}
int minimum(int a[],int n){
    int i;
    int m=INT_MAX;
    for(i=0;i<n;i++){
        if(a[i]<m)
        m=a[i];

    }
    return m;
}

int main(){
    int a[s],n,i,max,min;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter elements of the array"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    max=maximum(a,n);
    min=minimum(a,n);
    cout<<"maximum element is "<<max<<endl;
    cout<<"minimum element is "<<min<<endl;


    
}