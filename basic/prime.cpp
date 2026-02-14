<<<<<<< HEAD
#include<iostream>
using namespace std;
int main(){
    int n;
    int i=2;
    int f=0;
    cout<<"enter number to be checked";
    cin>>n;
    while(i<n){
        if(n%i==0){
            f=1;            
            break;
        }   
        i++;    

    }
    if(f==0){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    
=======
#include<iostream>
using namespace std;
int main(){
    int n;
    int i=2;
    int f=0;
    cout<<"enter number to be checked";
    cin>>n;
    while(i<n){
        if(n%i==0){
            f=1;            
            break;
        }   
        i++;    

    }
    if(f==0){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    
>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}