#include<iostream>
using namespace std;
void func(int n){
    if(n < 1){
        return;
    }
    cout<<n<<" ";
    func(n-1);
} 
//backtracking
void func2(int i , int n){
    if( i > n){
        return ;
    }
    func2(i+1,n);
    cout<<i<<" "; 
} 
int main(){
    int n;
    cout<<"enter the n numbers for reverse counting "<<endl;
    cin>>n;
    func(n);
    func2(1,n);
    return 0;
}