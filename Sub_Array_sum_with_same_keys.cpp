#include<bits/stdc++.h>
using namespace std;

int main() {
    // vector<int> V = {3, 0, 8, 0, 0, 7, 6, 1, -1, 10, 1, 9, 1, 8, 14};
    vector<int> V = {9, 7, 6, 5, -1, -4, 10, 15};
    unordered_map<int, vector<int>> mpp;
    int target = 13;
    int sum = 0;

    int cnt = 0;

    for(int i = 0; i < V.size(); i++) {
        sum += V[i];
        if(sum == target) {
            cout << "0 " << i << endl;
        }
        if(mpp.find(sum - target) != mpp.end()) {
            vector<int> indices = mpp[sum - target];
            for(int index : indices) {
                cout << index + 1 << " " << i << endl;
            }
        }
        mpp[sum].push_back(i);
    }

    return 0;
}
