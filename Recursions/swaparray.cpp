#include<iostream>
using namespace std;
//using 2 parameters
void func( int arr[],int l , int r){
    if(l>=r){
        return;
    }
    swap(arr[l],arr[r]);
    for(int i = 0 ; i < 5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    func(arr,l+1,r-1);
}
//using a single parameter
void func2(int arr[],int i,int n){
    if( i >= n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    cout<<arr;
    func2(arr,i+1,n);
}
int main(){
    // int arr[5] = {9,4,6,0,5};
    // func(arr,0,4);
    int n;
    cout<<"enter the number of elements you want in an array "<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cout<<"enter the element in array "<<endl;
        cin>>arr[i];
    }
    func2(arr,0,n);
    for(int i = 0;i< 6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}