<<<<<<< HEAD
#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int n,i;
    cout<<"enter range of the series"<<endl;
    cin>>n;
    cout<<a <<""<<b <<"";
    for(i=0;i<=n;i++){
        int c=a+b;        
        cout<<c <<"";
        a=b;
        b=c;


    }

=======
#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int n,i;
    cout<<"enter range of the series"<<endl;
    cin>>n;
    cout<<a <<""<<b <<"";
    for(i=0;i<=n;i++){
        int c=a+b;        
        cout<<c <<"";
        a=b;
        b=c;


    }

>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}