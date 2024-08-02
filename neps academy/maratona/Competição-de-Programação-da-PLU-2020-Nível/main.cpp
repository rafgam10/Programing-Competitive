#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define OU ||
#define END &&
int N;


int main() {
    
    cin >> N;

    while (N--) {
        int n;
        cin >> n;
        vector<int> heights(n);

        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }

        int totalWater = 0;
        int left = 0, right = n - 1;
        int leftMax = 0, rightMax = 0;

        while (left <= right) {
            if (heights[left] < heights[right]) {
                if (heights[left] > leftMax) {
                    leftMax = heights[left];
                } else {
                    totalWater += leftMax - heights[left];
                }
                left++;
            } else {
                if (heights[right] > rightMax) {
                    rightMax = heights[right];
                } else {
                    totalWater += rightMax - heights[right];
                }
                right--;
            }
        }

        cout << totalWater << endl;
    }

    return 0;
}
