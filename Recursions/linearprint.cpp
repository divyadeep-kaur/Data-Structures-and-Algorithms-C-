#include<iostream>
using namespace std;
void func(int i , int n){
    if( i > n){
        return ;
    }
    cout<<i<<" ";
    func(i+1,n);
    cout<<endl;
}
void fun1(int i , int n){ //backtracking
    if ( i < 1){
        return ;
    }
    fun1(i - 1, n);
    cout<<i<<" ";
}
int main(){
    int n;
    cout<<"how many times you want to print n numbers "<<endl;
    cin>>n;
    func(1,n);
    fun1(n,n);
    return 0;
}