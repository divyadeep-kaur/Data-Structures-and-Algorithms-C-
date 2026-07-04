#include<iostream>
using namespace std;
int main() {
    int digit , n ;
    cout<<"enter the number to be reversed "<<endl;
    cin>>n;
	int found = 0;
	while( n > 0){
		digit = n % 10;
		if(digit != 0){
			found = 1;
		}
		if(found = 1){
			cout<<digit;
		}
		n = n / 10;
	}
	return 0;
}

// #include<iostream>
// using namespace std;
// void rev(int n){
//     //input a number from the user and reverse it
//     int digit = 0;
//     while(n > 0){
//         digit = n % 10;
//         cout<<digit;
//         n = n / 10;
//     }
// }
// int main(){
// 	int digit;
//     int found = 0;
// 	int n = 140400;
// 	while( n > 0){
// 		digit = n % 10;
// 		if(digit != 0){
// 			found = 1;
// 		}
//         if(found == 1){
//             cout<<digit;
//         }
// 		n = n / 10;
// 	}
// 	return 0;
// }

//     // int n;
//     // cout<<"hi!! enter a number you want to reverse :) "<<endl;
//     // cin>>n;
//     // rev(n);
//     // return 0;
