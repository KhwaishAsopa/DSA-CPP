<<<<<<< HEAD
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    char ch;
    cout<<"enter values of a and b"<<endl;
    cin>>a>>b;
    cout<<"+.add\t-.subtract\t*.multiply\t/.divide\t%.modulus"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>ch;
    switch(ch){
        case '+':
            c=a+b;
            break;
        case '-':
            c=a-b;
            break;
        case '*':
            c=a*b;
            break;
        case '/':
            c=a/b;
            break;
        case '%':
            c=a%b;
            break;
        default:
            cout<<"invalid operator"<<endl;

    }
    cout<<"answer is:"<<c<<endl;
=======
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    char ch;
    cout<<"enter values of a and b"<<endl;
    cin>>a>>b;
    cout<<"+.add\t-.subtract\t*.multiply\t/.divide\t%.modulus"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>ch;
    switch(ch){
        case '+':
            c=a+b;
            break;
        case '-':
            c=a-b;
            break;
        case '*':
            c=a*b;
            break;
        case '/':
            c=a/b;
            break;
        case '%':
            c=a%b;
            break;
        default:
            cout<<"invalid operator"<<endl;

    }
    cout<<"answer is:"<<c<<endl;
>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}