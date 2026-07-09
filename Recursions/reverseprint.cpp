#include<iostream>
using namespace std;
void func(int n){
    if(n < 1){
        return;
    }
    cout<<n<<" ";
    func(n-1);
}  
int main(){
    int n;
    cout<<"enter the n numbers for reverse counting "<<endl;
    cin>>n;
    func(n);
    return 0;
}