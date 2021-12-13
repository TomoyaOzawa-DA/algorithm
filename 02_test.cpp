#include <iostream>     //library 
using namespace std;

int main() {
    int N;
    cin >> N; // plug into N

    for (int i = 2; i <= N; i += 2) {
        cout << i << endl; // count << ; : output. << endl makes a new line
    }
}
