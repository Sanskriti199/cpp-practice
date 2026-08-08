// Given a matrix with R rows and C columns.
// Find the largest sum among all rows.
// Find the largest sum among all columns.
// Add both largest sums and print the result.

// You are using GCC
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Store number of rows and columns
    int r, c;
    cin >> r >> c;

    // Create a matrix with r rows and c columns
    vector<vector<int>> a(r, vector<int>(c));

    // Take matrix elements as input
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    // Start maximum row and column sums with the smallest value
    int maxRow = INT_MIN, maxCol = INT_MIN;

    // Find the largest row sum
    for (int i = 0; i < r; i++) {
        // Store the sum of the current row
        int sum = 0;

        // Add all elements of the current row
        for (int j = 0; j < c; j++) {
            sum += a[i][j];
        }

        // Update maximum row sum
        maxRow = max(maxRow, sum);
    }

    // Find the largest column sum
    for (int j = 0; j < c; j++) {
        // Store the sum of the current column
        int sum = 0;

        // Add all elements of the current column
        for (int i = 0; i < r; i++) {
            sum += a[i][j];
        }

        // Update maximum column sum
        maxCol = max(maxCol, sum);
    }

    // Add largest row sum and largest column sum
    cout << maxRow + maxCol;

    return 0;
}