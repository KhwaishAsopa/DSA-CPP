<<<<<<< HEAD
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter binary number"<<endl;
    cin>>n;
    int i=0;
    int s=0;
    while(n!=0){
        int digit=n%10;
        if(digit==1){
            s=s+pow(2,i);
            
        }
        n=n/10;
        i++;
    }
    cout<<s<<endl;

=======
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter binary number"<<endl;
    cin>>n;
    int i=0;
    int s=0;
    while(n!=0){
        int digit=n%10;
        if(digit==1){
            s=s+pow(2,i);
            
        }
        n=n/10;
        i++;
    }
    cout<<s<<endl;

>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}