<<<<<<< HEAD
#include<iostream>
using namespace std;
int fibo(int n){
    int x;
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    x=fibo(n-1)+fibo(n-2);
    return x;
}
int main(){

    int n,a;
    cout<<"enter number:";
    cin>>n;
    a=fibo(n);
    cout<<a;
=======
#include<iostream>
using namespace std;
int fibo(int n){
    int x;
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    x=fibo(n-1)+fibo(n-2);
    return x;
}
int main(){

    int n,a;
    cout<<"enter number:";
    cin>>n;
    a=fibo(n);
    cout<<a;
>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}