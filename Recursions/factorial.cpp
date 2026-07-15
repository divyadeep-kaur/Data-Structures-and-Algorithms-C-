#include<iostream>
using namespace std;
int fac(int n){
    if ( n == 0){
        return 1;
    }
    return n * fac(n-1);
}
int main(){
    int n;
    cout<<"enter the number for factorial "<<endl;
    cin>>n;
    cout<<"factorial of "<<n<<" is "<<fac(n)<<endl;
    return 0;
}