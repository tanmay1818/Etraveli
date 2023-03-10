#include <iostream.h>
using namespace std;

const int MAX = 100000;
vector<int> graph[MAX];
bool visited[MAX];
bool stack[MAX];

bool dfs(int u) {
    visited[u] = true;
    stack[u] = true;

    for (int v : graph[u]) {
        if (!visited[v] && dfs(v))
            return true;
        else if (stack[v])
            return true;
    }

    stack[u] = false;
    return false;
}

bool hasCycle(int n) {
    memset(visited, false, sizeof(visited));
    memset(stack, false, sizeof(stack));

    for (int i = 0; i < n; i++) {
        if (!visited[i] && dfs(i))
            return true;
    }

    return false;
}

int main() {
    int V, E;
    cin >> V >> E;

    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }

    if (hasCycle(V))
        cout << "Graph contains a cycle" << endl;
    else
        cout << "Graph does not contain a cycle" << endl;

    return 0;
}
