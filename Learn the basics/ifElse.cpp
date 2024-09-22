#include<iostream>
using namespace std;

class Solution{
public:
    string compareNM(int n, int m){
        if(n < m) return "lesser";
        if(n == m) return "equal";
        if(n > m) return "greater";
    }
};

int main(){
    int n, m;
    cin>>n>>m;

    Solution sol;
    string str = sol.compareNM(n, m);
    cout<<str;
    
    return 0;
}