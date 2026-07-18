#include<iostream>
using namespace std;

int main(){
    char a;
    int n;
    cout<<"enter the number of characters you want to add in an array "<<endl;
    cin>>n;
    char arr[n];
    for( int i = 0; i < n; i++){
        cout<<"enter the character "<<i+1<<":"<<endl;
        cin>>arr[i];
    }
    int hash[26]={0};
    for(int i = 0 ; i < n; i++){
        hash[arr[i]-'a']++;
    }
    int q;
    cout<<"how many queries do you want to ask "<<endl;
    cin>>q;
    for( int i = 0;i < q;i++){
        char ch;
        cout<<"enter the character "<<endl;
        cin>>ch;
        cout<<"the number of times this query has appeared is "<<hash[ch-'a']<<endl;
    }
    return 0;
}