<<<<<<< HEAD
#include<iostream>
using namespace std;
bool sorted(int a[],int n){
    if(n==0 || n==1)
        return true;
    if(a[0]>a[1])
        return false;
    else{
        bool s=sorted(a+1,n-1);
        return s;
    }
}
int main(){

    int a[10],i,n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter elements of array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    bool s=sorted(a,n);
    if(s==true)
        cout<<"array is sorted";
    else    
        cout<<"array is not sorted";
=======
#include<iostream>
using namespace std;
bool sorted(int a[],int n){
    if(n==0 || n==1)
        return true;
    if(a[0]>a[1])
        return false;
    else{
        bool s=sorted(a+1,n-1);
        return s;
    }
}
int main(){

    int a[10],i,n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter elements of array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    bool s=sorted(a,n);
    if(s==true)
        cout<<"array is sorted";
    else    
        cout<<"array is not sorted";
>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}