#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
    for (int i = 0; i < n-1; i++){
        int minIndex = i;
        for(int j = i+1 ; j<n ; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        // swap(arr[i],arr[minIndex]);
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i]=temp;
    }
    
}
    int main(){
        int n;
        cout<<"how many elements do you want to add in your array "<<endl;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cout<<"Enter the element: "<<endl;
            cin>>arr[i];
        }
        selection_sort(arr,n);
        for (int display = 0; display < n; display++)
        {
            cout<<arr[display]<<" ";
        }
        return 0; 
    }
// int main(){
//     int n;
//     cout<<"enter the number of elements to add in array "<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i = 0;i>=n ; i++){
//         cout<<"enter element "<<i<<"of array "<<endl;
//         cin>>arr[i];
//     }
//     int hash[12] = {0};
//     for(int i = 0;i<=12 ; i++){
//         hash[arr[i]]+=1;
//     }
//     int query;
//     cout<<"enter the number of queries you want to ask "<<endl;
//     cin>>query;
//     while(query--){
//         int number;
//         cout<<"enter query "<<endl;
//         cin>>number;
//         cout<<"the element has appeared "<<hash[number]<<endl;

//     }
// }
// int main(){
//     int num;
//     int rev = 0;
//     cout<<"enter the number you want to check is palindrome or not"<<endl;
//     cin>>num;
//     int orignal = num;
//     while(num>0){
//         int digit = num % 10;
//         num = num / 10;
//         rev = (rev*10)+digit;
//     }
//     if(orignal == rev){
//         cout<<"yes it is palindrome"<<endl;
//     }
//     else{
//         cout<<"no it is not palindrome"<<endl;
//     }
// }
// int main(){//7789 --> 9877
//     int num;
//     int rev = 0;
//     cout<<"enter number to be reversed : "<<endl;
//     cin>>num;
//     while(num>0){
//         int digit = num%10;
//         num=num/10;
//         rev=(rev*10)+digit;
//     }
//     cout<<rev;
// }
// int main(){
//     for( int i = 1; i<= 4 ; i++){
//         for(int j = 1 ; j<= i ; j++){
//             cout<<j;
//         }
//         for(int space = 1;space<=2*(4-i);space++){
//         cout<<" ";
//         }
//         for(int j2 = i;j2>=1;j2--){
//             cout<<j2;
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     for(int i = 1; i<= 5 ; i++){
//         for(int j = 1; j<= i ; j++){
//             if(i % 2 != 0){
//                 if(j == 2 || j == 4){
//                     cout<<'0';
//                 }
//                 else{
//                     cout<<'1';
//                 }
//             }
//             else{ //i = 2,4
//                 if(j == 2 || j == 4){
//                     cout<<'1';
//                 }
//                 else{
//                     cout<<'0';
//                 }
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
/*
    *
   ***
  *****
 *******
*********
*/


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the number of elements to add in an array "<<endl;
//     cin>>n;
//     int arr[n];
//     for ( int i = 0 ; i < n ; i++ ){
//         cout<<"enter the element "<<n<<" :"<<endl;
//         cin>>arr[i];
//     }
//     int hash[10]={0};
//     for (int i = 0; i < n; i++ ){
//         hash[arr[i]]++;
//     }
//     int q;
//     cout<<"enter the number of queries you have "<<endl;
//     cin>>q;
//     while(q--){
//         int number ;
//         cout<<"enter the "<<q+1<<"th query"<<endl;
//         cin>>number;
//         cout<<endl;
//         cout<<"the value of query is "<<hash[number]<<endl;
//     }
//     return 0;
// }