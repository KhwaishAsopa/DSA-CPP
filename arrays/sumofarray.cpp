#include<iostream>
#define s 10
using namespace std;
int sumof(int a[],int n){
    int i,sum=0;
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    return sum;

}
int main(){
    int a[s],n,i;
    int sum;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter elements of the array"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sum=sumof(a,n);
    cout<<"sum of the array elements is :"<<sum;
}