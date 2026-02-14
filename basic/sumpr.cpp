<<<<<<< HEAD
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int x;
    int p=1;
    int s=0;
    while(n!=0){
        x=n%10;
        s+=x;
        p*=x;
        n=n/10;
        
    }
    cout<<"sum of the digits is "<<s<<endl;
    cout<<"product of digits is "<<p<<endl;
=======
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int x;
    int p=1;
    int s=0;
    while(n!=0){
        x=n%10;
        s+=x;
        p*=x;
        n=n/10;
        
    }
    cout<<"sum of the digits is "<<s<<endl;
    cout<<"product of digits is "<<p<<endl;
>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}