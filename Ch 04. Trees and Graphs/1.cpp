#include "bits/stdc++.h"

using namespace std;

class Solution {
private:
    vector<vector<int>> g;
public:
    bool has_path(int n, int start, int finish) {
        --start; --finish;
        vector<bool> visited(n, false);
        visited[start] = true;
        queue<int> q;
        q.push(start);
        while(!q.empty()) {
            int cur = q.front(); q.pop();
            for (int neighbour : g[cur]) {
                if (visited[neighbour]) { continue; }
                q.push(neighbour);
                visited[neighbour] = true;
            }
        }
        return visited[finish];
    }
};

int main() {
    ios::sync_with_stdio(false);
    
    return 0;
}
