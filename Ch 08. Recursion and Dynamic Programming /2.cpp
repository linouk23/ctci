#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = (int)obstacleGrid.size();
        int n = (int)obstacleGrid[0].size();
        vector<vector<int> > result(m, vector<int> (n, 0));
        result[0][0] = obstacleGrid[0][0] == 0 ? 1 : 0;
        for (int row = 1; row < m; ++row) {
            if (obstacleGrid[row][0] == 1) { continue; }
            result[row][0] = result[row - 1][0];
        }
        for (int col = 1; col < n; ++col) {
            if (obstacleGrid[0][col] == 1) { continue; }
            result[0][col] = result[0][col - 1];
        }

        for (int row = 1; row < m; ++row) {
            for (int col = 1; col < n; ++col) {
                if (obstacleGrid[row][col] == 1) { continue; }
                result[row][col] += result[row - 1][col] + result[row][col - 1];
            }
        }
        return result[m - 1][n - 1];
    }
};

int main() {
    ios::sync_with_stdio(false);
    
    return 0;
}