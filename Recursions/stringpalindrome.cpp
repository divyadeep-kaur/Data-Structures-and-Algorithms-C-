#include<iostream>
using namespace std;
int func(string str,int i,int n){
    if(i >= n/2){
        return true;
    }
    if(str[i]!= str[n-i-1]){
        return false;
    }
    func(str,i+1,n);

}
int main(){
    string str;
    cout<<"enter the string to check if it is palindrome or not "<<endl;
    cin>>str;
    int n = str.length();
    cout<<func(str,0,n);
    return 0;

}