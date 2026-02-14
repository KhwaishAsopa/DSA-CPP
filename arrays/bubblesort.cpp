#include<iostream>
#define s 10
using namespace std;
int bsort(int a[],int n){
    int i,j,t;
    bool swapped =false;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        break;
    }
}
int main(){
    int a[s],i,n;
    cout<<"enter size of array";
    cin>>n;
    cout<<"enter elements of array";
    for(i=0;i<n;i++)
    cin>>a[i];
    bsort(a,n);
    cout<<"sorted array is "<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
}