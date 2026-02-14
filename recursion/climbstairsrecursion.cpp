<<<<<<< HEAD
#include<iostream>
using namespace std;
int ways(int n){
    int x;
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    x=ways(n-1)+ways(n-2);
    return x;
}
int main(){

    int n,a;
    cout<<"enter stair number:";
    cin>>n;
    a=ways(n);
    cout<<a;
=======
#include<iostream>
using namespace std;
int ways(int n){
    int x;
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    x=ways(n-1)+ways(n-2);
    return x;
}
int main(){

    int n,a;
    cout<<"enter stair number:";
    cin>>n;
    a=ways(n);
    cout<<a;
>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}