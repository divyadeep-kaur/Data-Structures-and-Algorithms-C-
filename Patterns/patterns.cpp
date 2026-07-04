#include<iostream>
#include<string>
using namespace std;
void pattern1(){
    for(int i=1;i<=5;i++){
        for(int sp1 = 1;sp1<=6-i;sp1++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i)-1;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    for(int i=1;i<=4;i++){
        for(int sp2 = 1;sp2<=i;sp2++){
            cout<<" ";
        }
        for(int j=1;j<=2*(6 - i)-1;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    /* 
     *
    ***
   *****
  *******
 *********
 *********
  *******
   *****
    ***
     *
    */
}
void pattern2(){
    for(int i = 1;i<= 5;i++){
        for(int j = 1;j<=i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    for(int i = 1;i<= 4;i++){
        for(int j = 1;j<=4-i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    /*
*
**
***
****
*****
***
**
*
    */
}
void pattern3(){
    for(int i =1;i<=5;i++){
        int start = 1;
        if(i % 2 != 0){ //odd rows
                start = 1;
            }
            else{
                start = 0;
            }
        for(int j=1;j<=i;j++){
            if(start == 1){
                cout<<start;
                start = 0;
            }
            else{
                cout<<start;
                start = 1;
            }
        }
        cout<<endl;
    }
    /*
    1
    01
    101
    0101
    10101
    */
}
void pattern4(){
    for(int i=1;i<=4;i++){
        for(int j1 = 1; j1<=i ; j1++){
            cout<<j1;
        }
        for(int space = 1;space<= 2*(4-i) ; space++){
            cout<<" ";
        }
        for(int j2=i; j2>= 1; j2--){
            cout<<j2;
        }
        cout<<endl;
   
    }
    /*
1      1
12    21
123  321
12344321

*/
}
void pattern5(){
    int num = 1;
    for(int i = 1; i<=5 ; i++){
        for(int j = 1;j<= i ; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    /*
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
    */
}
void pattern6(){
    for(int i = 1; i<= 5; i++){
        char ch = 'A';
        for(int j=1; j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    /*
A 
A B 
A B C 
A B C D 
A B C D E 
    */
}
void pattern7(){
    for(int i = 1; i<= 5 ; i++){
        char ch = 'A';
        for(int j = 1; j<= (6-i) ;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    /*
A B C D E 
A B C D 
A B C 
A B 
A 
    */
}
void pattern8(){
    for(int i = 1;i<=5 ; i++){
        char ch = 'A'+ (i-1);
        for(int j = 1; j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    /*
    A
    B B
    C C C
    D D D D
    E E E E E
    */
}
void pattern9(){
    for(int i = 1; i<=5 ; i++){
        for(int space = 1; space <= 5-i ; space++){
            cout<<" ";
        }
        for(int j = i;j>=1 ; j--){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern10(){
    for(int i = 1; i<=5 ; i++){
        for(int space = 1; space <= 5-i ; space++){
            cout<<" ";
        }
        for(int j = 1;j<=i ; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern11(){
    
    for(int i = 1; i<=4 ; i++){
        char ch = 'A';
        for(int space = 1; space <= 4-i ; space++){
            cout<<" ";
        }
        //increasing
        for(int j = 1;j<=i ; j++){
            cout<<ch;
            ch++;
        }
        //decreasing
        char c = 'A'+(i-2);
        for(int j =1 ;j<=i-1;j++){
            cout<<c;
            c--;
        }
        cout<<endl;
    }
    /*
       A
      ABA
     ABCBA
    ABCDCBA
    */
}
void pattern12(){
    for (int i = 1 ; i <= 5; i++){
        char ch = 'E' - (i - 1);
        for(int j = 1;j<= i ; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    /*
    E 
    D E 
    C D E 
    B C D E 
    A B C D E 
    */
}
void pattern13(){
    for( int i =1 ; i<= 5 ;i++){
        for(int j = 1; j<= 6-i ; j++){
            cout<<'*';
        }
        for(int space = 1; space <= 2* (i - 1); space++){
            cout<<" ";
        }
        for(int j = 1; j<= 6-i ; j++){
            cout<<'*';
        }
        cout<<endl;
    }
    for( int i =1 ; i<= 5 ;i++){
        for(int j = 1; j<= i ; j++){
            cout<<'*';
        }
        for(int space = 1; space <= 2* (5 - i); space++){
            cout<<" ";
        }
        for(int j = 1; j<= i ; j++){
            cout<<'*';
        }
        cout<<endl;
    }
    /*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
    */
}
void pattern14(){
    for( int i =1 ; i<= 5 ;i++){
        for(int j = 1; j<= i ; j++){
            cout<<'*';
        }
        for(int space = 1; space <= 2* (5 - i); space++){
            cout<<" ";
        }
        for(int j = 1; j<= i ; j++){
            cout<<'*';
        }
        cout<<endl;
    }
    for( int i =2 ; i<= 5 ;i++){
        for(int j = 1; j<= 6-i ; j++){
            cout<<'*';
        }
        for(int space = 1; space <= 2* (i - 1); space++){
            cout<<" ";
        }
        for(int j = 1; j<= 6-i ; j++){
            cout<<'*';
        }
        cout<<endl;
    }
}
void pattern15(){
    for(int i = 1; i<= 4 ; i++){
        for(int j = 1; j<= 4; j++){
            if(i == 2 || i == 3){
                if(j == 1 || j == 4){
                    cout<<'*';
                }
                else{
                    cout<<" ";
                }
            }
            else{
                cout<<'*';
            }
        }
        cout<<endl;
    }
    /*

****
*  *
*  *
****

    */
}
void pattern16(int n){
    for(int i = 0;i<= 2*n - 1; i++){
        for(int j = 0 ; j<= 2*n-1 ; j++){
            int top = i;
            int right = 2*(n-1)-j;
            int bottam = 2*(n-1)-i;
            int left = j;
            cout<<(n-min(min(top,bottam),min(right , left)));
        }
        cout<<endl;
    }

/*
    0123456 --> i
|
v
j
0   4444444
1   4333334
2   4322234
3   4321234
4   4322234
5   4322234
6   4444444
*/
}
int main(){
    pattern16(3);
    return 0;
}