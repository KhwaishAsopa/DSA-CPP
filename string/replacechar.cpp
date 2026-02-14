<<<<<<< HEAD
#include<iostream>
using namespace std;
string replace(string s){
    int i;
    string c= "";
    for(i=0;i<s.length();i++){
        if(s[i]==' '){
            c.push_back('@');
            c.push_back('4');
            c.push_back('0');
            
        }
        else{
            c.push_back(s[i]);
        }
    }
    return c;
}
int main(){
    string s;
    string t="";
    int n;
    char m;
    cout<<"enter the string";
    cin>>s;
    t=replace(s);
    cout<<"updated string is"<<endl;
    cout<<t;



}
=======
#include<iostream>
using namespace std;
string replace(string s){
    int i;
    string c= "";
    for(i=0;i<s.length();i++){
        if(s[i]==' '){
            c.push_back('@');
            c.push_back('4');
            c.push_back('0');
            
        }
        else{
            c.push_back(s[i]);
        }
    }
    return c;
}
int main(){
    string s;
    string t="";
    int n;
    char m;
    cout<<"enter the string";
    cin>>s;
    t=replace(s);
    cout<<"updated string is"<<endl;
    cout<<t;



}
>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
