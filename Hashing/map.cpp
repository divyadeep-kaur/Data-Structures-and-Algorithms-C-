#include<iostream>
#include<map>
using namespace std;
int main(){
    //number of elements in array 
    int n;
    cout<<"Hey!!how many elements you want to add in array? "<<endl;
    cin>>n;

    //enter elements in array
    int arr[n];
    for (int i = 0; i < n; i++){
        cout<<"enter element of array: ";
        cin>>arr[i];
    }
    //pre-compute
    map<int,int> mpp;
    for(int i=0 ; i<n ; i++){
        mpp[arr[i]]++;
    }
    //lets see how mapping requires less memory then array by iterating
    for( auto it : mpp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
    int q;
    cout<<"how many elements you want to find "<<endl;
    cin>>q;
    //fetch
    while(q--){
        int number;
        cout<<"enter the query"<<endl;
        cin>>number;
        cout<<"the element is found "<<mpp[number]<<" times"<<endl;
    }
}