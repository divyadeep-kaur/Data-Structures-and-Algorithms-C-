#include<iostream>
using namespace std;
void prime(int n){
    // 2 3 5 7 9 11.....
    int count = 0;
    for( int i = 1 ; i <= n ; i++){
        if(n % i == 0){
            count = count + 1;
        }
    }
        if(count == 2){
            cout<<n<<" yes it is prime number "<<endl;
        }
        else{
            cout<<n<<" no it is not prime number "<<endl;
        }
}
int main(){
    prime(2);
    prime(3);
    prime(6);
    prime(11);
    return 0;
}