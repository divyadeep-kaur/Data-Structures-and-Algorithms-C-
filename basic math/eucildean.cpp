#include<iostream>
//gcd(a,b)= gcd(a-b,b)where a > b ---> 0
using namespace std;
void euclidean(int n1 , int n2){
    while(n1 > 0 && n2 > 0){
        if( n1 > n2){
            n1 = n1 % n2;
        }
        else{
            n2 = n2 % n1;
        }
    }
    if(n1 == 0){
            cout<<n2<<endl;
        }
        else{
            cout<<n1<<endl;
        }
}  
int main(){
    euclidean(4 , 8);
    euclidean(52 , 10);
    euclidean(11 , 13);
    return 0;
}