<<<<<<< HEAD
#include<iostream>
using namespace std;
int power(int a,int b){
    int s;
    if(b==0)
        return 1;
    if(b==1)
        return a;
    s=power(a,b/2);
    if(b%2==0)
        return (s*s);
    else
        return(a*s*s);
    
}
int main(){
    int a,b,c;
    cout<<"enter a ";
    cin>>a;
    cout<<"enter b ";
    cin>>b;
    c=power(a,b);
    cout<<"a^b= "<<c;
=======
#include<iostream>
using namespace std;
int power(int a,int b){
    int s;
    if(b==0)
        return 1;
    if(b==1)
        return a;
    s=power(a,b/2);
    if(b%2==0)
        return (s*s);
    else
        return(a*s*s);
    
}
int main(){
    int a,b,c;
    cout<<"enter a ";
    cin>>a;
    cout<<"enter b ";
    cin>>b;
    c=power(a,b);
    cout<<"a^b= "<<c;
>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}