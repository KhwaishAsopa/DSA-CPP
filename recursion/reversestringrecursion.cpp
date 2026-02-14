<<<<<<< HEAD
#include<iostream>
using namespace std;
void reverse(string &s,int i,int j){
    if(i>j)
        return;
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(s,i,j);

}
int main(){
    string s;
    cout<<"enter string";
    cin>>s;
    reverse(s,0,s.length()-1);
    cout<<"reversed string: "<<s;
=======
#include<iostream>
using namespace std;
void reverse(string &s,int i,int j){
    if(i>j)
        return;
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(s,i,j);

}
int main(){
    string s;
    cout<<"enter string";
    cin>>s;
    reverse(s,0,s.length()-1);
    cout<<"reversed string: "<<s;
>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}