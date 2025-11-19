#include <iostream>
using namespace std;

int main() {
    int A[] = {1, 2, 3, 4};
    int B[] = {3, 4, 5, 6};
    int nA = 4, nB = 4;

    for (int i = 0; i < nA; i++) {
        for (int j = 0; j < nB; j++) {
            if (A[i] == B[j]) {
                cout << A[i] << " ";
                break;
            }
        }
    }
}
