#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    // OBJECTIVE to detect wheter the vector includes the target number
    // INPUT N : size of the vector, v: target number
    // OUTPUT exist: true or false

    int N, v;
    cin >> N >> v;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    bool exist = false;
    for (int i = 0; i < N ; ++i) {
        if(a[i] == v) {
            exist = true;
        }
    }

    if (exist) cout << "Yes" << endl;
    else cout << "No" << endl;
}