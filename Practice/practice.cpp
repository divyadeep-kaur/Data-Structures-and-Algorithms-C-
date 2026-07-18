#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of elements to add in an array "<<endl;
    cin>>n;
    int arr[n];
    for ( int i = 0 ; i < n ; i++ ){
        cout<<"enter the element "<<n<<" :"<<endl;
        cin>>arr[i];
    }
    int hash[10]={0};
    for (int i = 0; i < n; i++ ){
        hash[arr[i]]++;
    }
    int q;
    cout<<"enter the number of queries you have "<<endl;
    cin>>q;
    while(q--){
        int number ;
        cout<<"enter the "<<q+1<<"th query"<<endl;
        cin>>number;
        cout<<endl;
        cout<<"the value of query is "<<hash[number]<<endl;
    }
    return 0;
}