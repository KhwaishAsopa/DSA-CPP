<<<<<<< HEAD
#include<iostream>
using namespace std;
void say(int n,string arr[]){
    if(n==0)
        return;
    int x=n%10;
    say(n/10,arr);
    cout<<arr[x]<<" ";
    
}
int main(){
    int n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    cout<<"enter number:";
    cin>>n;
    say(n,arr);
=======
#include<iostream>
using namespace std;
void say(int n,string arr[]){
    if(n==0)
        return;
    int x=n%10;
    say(n/10,arr);
    cout<<arr[x]<<" ";
    
}
int main(){
    int n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    cout<<"enter number:";
    cin>>n;
    say(n,arr);
>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}