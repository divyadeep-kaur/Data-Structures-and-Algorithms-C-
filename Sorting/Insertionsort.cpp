#include<iostream>
using namespace std;
void insertion_sort(int arr[], int n){
    for(int i = 0; i < n ; i++ ){
        int key = arr[i];
        int j = i - 1;
        while( j >= 0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int n;
    cout<<"how many elements you want to add in array? "<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the element: "<<endl;
        cin>>arr[i];
    }
    insertion_sort(arr,n);
    cout<<"the sorted array is "<<endl;
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}