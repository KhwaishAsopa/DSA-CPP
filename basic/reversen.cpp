<<<<<<< HEAD
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter no to be reversed"<<endl;
    cin>>n;
    int d;
    int r=0;
    while(n!=0){
        d=n%10;
        r=(r*10)+d;
        n=n/10;
    }
    cout<<"reversed number is "<<endl;
    cout<<r;
    

=======
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter no to be reversed"<<endl;
    cin>>n;
    int d;
    int r=0;
    while(n!=0){
        d=n%10;
        r=(r*10)+d;
        n=n/10;
    }
    cout<<"reversed number is "<<endl;
    cout<<r;
    

>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}