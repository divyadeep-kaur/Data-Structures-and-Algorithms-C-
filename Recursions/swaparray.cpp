#include<iostream>
using namespace std;
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
int main(){
    int arr[5] = {9,4,6,0,5};
    func(arr,0,4);
    return 0;
}