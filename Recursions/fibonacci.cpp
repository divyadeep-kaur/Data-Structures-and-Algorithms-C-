#include<iostream>
using namespace std;
int func(int n){
    if ( n<= 1){
        return n;
    }
    return func(n-1)+func(n-2);
}
int main(){
    int n;
    cout<<"enter the place of fibbonacci series "<<endl;
    cin>>n;
    cout<<func(n);
    return 0;
}