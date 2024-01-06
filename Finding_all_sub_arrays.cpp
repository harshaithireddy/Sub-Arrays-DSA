#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> V = {7, 5, 3, -1, 8};

    for (int i = 0; i < V.size(); i++) {
        for (int j = i; j < V.size(); j++) {
            for (int k = i; k <= j; k++) {
                cout << V[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
