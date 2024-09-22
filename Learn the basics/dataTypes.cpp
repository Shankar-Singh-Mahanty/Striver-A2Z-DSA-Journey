#include<iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int dataTypeSize(string str) {
        unordered_map<string, int> typeSize = {
            {"Character", sizeof(char)},
            {"Integer", sizeof(int)},
            {"Long", sizeof(long int)},
            {"Float", sizeof(float)},
            {"Double", sizeof(double)}
        };

        if (typeSize.find(str) != typeSize.end()) { // condtion to search inside map
            return typeSize[str];
        } else {
            return -1;
        }
    }
};

int main(){
    Solution sol;
    string str;
    cin>>str;
    int size = sol.dataTypeSize(str);

    cout<<size<<endl;

    return 0;
}