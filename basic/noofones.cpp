<<<<<<< HEAD
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number to be checked"<<endl;
    cin>>n;
    int count =0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<"number of ones is"<<count<<endl;
=======
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number to be checked"<<endl;
    cin>>n;
    int count =0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<"number of ones is"<<count<<endl;
>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}