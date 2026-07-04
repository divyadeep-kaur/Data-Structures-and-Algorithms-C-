#include<iostream>
#include<cmath>
using namespace std;
//armstrong number
/*
1634 --> 1**3 + 6**3 + 3**3 + 4**3 = 1634
*/
void armstrong(int n){
    int orignal = n;
    int count = 0;
    int arm = 0;
    int digit;
    while(n > 0){
        n = n / 10;
        count += 1;
    }
    n = orignal;
    while( n > 0){
        digit = n % 10;
        arm = pow(digit,count)+ arm;
        n = n / 10;
    }
    if(orignal == arm){
        cout<<"yes it is armstrong "<<endl;
    }
    else{
        cout<<"no it is not armstrong "<<endl;
    }
}
int main(){
    armstrong(371);
    return 0;
}