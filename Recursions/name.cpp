#include<iostream>
#include<string>
using namespace std;
void func(int i ,int n , string name){
    if(i > n){
        return ;
    }
    cout<<name<<endl;
    func(i+1,n,name);
}
int main(){
    string name;
    cout<<"enter your name "<<endl;
    cin>>name;
    func(1,5,name);
    return 0;
}