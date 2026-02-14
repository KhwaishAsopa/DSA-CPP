<<<<<<< HEAD
#include<iostream>
using namespace std;
int main(){
    int num;
    int *ptr=&num;
    cout<<"enter value"<<endl;
    cin>>num;
    cout<<"value is: "<<*ptr<<endl;
    
    cout<<"address of the value is: "<<ptr<<endl;
    num++;
    /*
    cout<<"value is: "<<num<<endl;
*/
    ptr++;
    cout<<*ptr<<endl;;
    cout<<ptr;

=======
#include<iostream>
using namespace std;
int main(){
    int num;
    int *ptr=&num;
    cout<<"enter value"<<endl;
    cin>>num;
    cout<<"value is: "<<*ptr<<endl;
    
    cout<<"address of the value is: "<<ptr<<endl;
    num++;
    /*
    cout<<"value is: "<<num<<endl;
*/
    ptr++;
    cout<<*ptr<<endl;;
    cout<<ptr;

>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}