#include <iostream>
using namespace std;

int main() {
    int nums[] = {4, 5, 1, 2, 0, 4};
    int n = 6;

    for (int i = 0; i < n; i++) {
        int freq = 0;
        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) freq++;
        }
        if (freq == 1) {
            cout << nums[i];
            return 0;
        }
    }
}
