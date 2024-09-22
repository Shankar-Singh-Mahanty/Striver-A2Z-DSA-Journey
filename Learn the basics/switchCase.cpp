#include<iostream>
#include <math.h>
#include <vector>
using namespace std;

class Solution {
public:
    double switchCase(int choice, vector<double> &arr) {
        switch(choice){
            case 1: 
                if(arr.size() < 1) return -1;
                else return M_PI * arr[0] * arr[0];
            case 2: 
                if(arr.size() < 2) return -1;
                else return arr[0] * arr[1];
            default: return -1;
        }
    }
};

int main(){
    int n, R, L, B;
    double area;
    vector<double> arr;

    cin >> n;
    Solution sol;

    if(n == 1){
        cin >> R;
        arr.push_back(R);
    } else if(n == 2){
        cin >> L >> B;
        arr.push_back(L);
        arr.push_back(B);
    } else {
        cout << "Invalid entry" << endl;
        return 0;
    }

    area = sol.switchCase(n, arr);
    cout << area << endl;
    
    return 0;
}
