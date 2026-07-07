#include<iostream>
#include<vector>
using namespace std;
void sortedfac(int n){
    // 2 3 5 7 9 11.....
    vector<int>ls;
    int count = 0;
    for( int i = 1 ; i*i <= n ; i++){
        if(n % i == 0){
            ls.push_back(i);
            if(n%i != i){
                ls.push_back(n/i);
            }
        }
    }
    
    sort(ls.begin(),ls.end());
    for(auto it : ls)cout<<it<<" ";
}
int main(){
    sortedfac(36);
    return 0;
}