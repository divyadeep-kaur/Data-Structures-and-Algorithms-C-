#include<iostream>
using namespace std;
void factors(int n){
    int count = 0;
    for( int i = 1; i <= n ; i ++){
        if( n % i == 0){
            cout<<"the factor of "<<n<<" is "<<i<<endl;
        }
    }
}
int main(){
    factors(36);
    return 0;
}