#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> V = {1, 4, 5, 5, 9, 1, 10, 5};
    map<int, int> mpp;
    int target = 15;
    int sum = 0;

    for(int i = 0; i < V.size(); i++) {
        sum += V[i];
        if(sum == target) {
            cout << "0 " << i << endl;
        }
        if(mpp.find(sum - target) != mpp.end()) {
            cout << mpp[sum - target] + 1 << " " << i << endl;
        }
        mpp[sum] = i;
    }
    return 0;
}
