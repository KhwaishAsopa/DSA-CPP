<<<<<<< HEAD
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter no to be checked"<<endl;
    cin>>n;
    int i=0;
    int f=0;
    for(i=0;i<31;i++){
        int p=pow(2,i);
        if(p==n){
            f=1;
            cout<<"yes"<<endl;
            break;
        }     

    }
    if(f==0){
        cout<<"no"<<endl;
    }
=======
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter no to be checked"<<endl;
    cin>>n;
    int i=0;
    int f=0;
    for(i=0;i<31;i++){
        int p=pow(2,i);
        if(p==n){
            f=1;
            cout<<"yes"<<endl;
            break;
        }     

    }
    if(f==0){
        cout<<"no"<<endl;
    }
>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}