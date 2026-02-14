<<<<<<< HEAD
#include<iostream>
using namespace std;
int fact(int c){
    int f=1;
    int i;
    for(i=1;i<=c;i++){
        f=f*i;
    }
    return f;
    
}
int ncr(int n,int r){
    int num=fact(n);
    int den=fact(r)*fact(n-r);
    return(num/den);
}
int main(){
    int n,r,a;
    cout<<"enter value of n and r";
    cin>>n>>r;
    a=ncr(n,r);
    cout<<"answer is "<<a<<endl;

=======
#include<iostream>
using namespace std;
int fact(int c){
    int f=1;
    int i;
    for(i=1;i<=c;i++){
        f=f*i;
    }
    return f;
    
}
int ncr(int n,int r){
    int num=fact(n);
    int den=fact(r)*fact(n-r);
    return(num/den);
}
int main(){
    int n,r,a;
    cout<<"enter value of n and r";
    cin>>n>>r;
    a=ncr(n,r);
    cout<<"answer is "<<a<<endl;

>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}