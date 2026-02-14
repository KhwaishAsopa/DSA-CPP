<<<<<<< HEAD
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter range"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i){
            cout<<j<<" ";
            j++;
        }
        int start=i-1;
        while(start!=0){
            cout<<start<<" ";
            start--;

        }
        cout<<endl;
        i++;
    }
=======
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter range"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i){
            cout<<j<<" ";
            j++;
        }
        int start=i-1;
        while(start!=0){
            cout<<start<<" ";
            start--;

        }
        cout<<endl;
        i++;
    }
>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}