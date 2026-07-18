#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"input the number of elements you want to add in an array "<<endl;
    cin>>n;
    int arr[n];
    //taking the elements of array
    for( int i = 0; i < n ; i++){
        cout<<"enter the element "<<i<<endl;
        cin>>arr[i];
    }
    int hash[13]= {0};
    for( int i = 0; i < n ; i++){
        hash[arr[i]]+=1;
    }
    int q;
    //how many number's iterations do you want to ask
    cout<<"how many queries do you want to ask ?"<<endl;
    cin>>q;
    while(q--){
        int number;
        cout<<"enter the query: ";
        cin>>number;
        cout<<"number "<<number<<" has appeared "<<hash[number]<<" number of times "<<endl;
    }
    return 0;
}