#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int multiplier = 10;
    while(multiplier > 0){
        cout<<n * multiplier<<" ";
        multiplier--;
    }
    return 0;
}