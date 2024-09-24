#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> passedBy(int a, int &b) {
        return {a+1, b+2};
    }
};

int main(){
    Solution sol;
    int b = 20;
    vector<int> result = sol.passedBy(10, b);
    for(int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
