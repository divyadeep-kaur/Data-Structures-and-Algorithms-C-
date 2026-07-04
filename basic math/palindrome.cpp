#include<iostream>
using namespace std;
class Solution{
    public:
        bool isPalindrome(int x){
            int orignal = x;
            int digit ;
            int rev = 0;
            while( x > 0){
                digit = x % 10;
                rev = rev * 10 + digit;
                x = x / 10;
            }
            if(orignal == rev){
                cout<<"true";
                return true;
            }
            else{
                cout<<"false";
                return false;
            }
        }
};
int main(){
    Solution p;
    p.isPalindrome(1441);
    return 0;
}