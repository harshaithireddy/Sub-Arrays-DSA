#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> V = {1, 3, 3, 1, 2, 2};
    int K = 4;

    int cnt = 0;

    sort(V.begin(), V.end());

    map<int, int> mpp;

    for (int i = 0; i < V.size(); ++i) {
        mpp[V[i]]++;
    }

    for (int i = 0; i < V.size(); ++i) {
        mpp[V[i]] -= 1;

        if (mpp.find(K - V[i]) != mpp.end()) {
            cnt += mpp[K - V[i]];
        }
    }

    cout << cnt;
}
