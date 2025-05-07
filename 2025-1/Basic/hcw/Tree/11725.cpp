#include <iostream>
#include <vector>

using namespace std;

vector<int> tree[100001];
int parent[100001];
bool visited[100001];

void dfs(int current)
{
    visited[current] = true;

    for (int next : tree[current])
    {
        if (!visited[next])
        {
            parent[next] = current;
            dfs(next);
        }
    }
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    dfs(1); // root 를 1이라고 가정했기 때문?

    for (int i = 2; i <= N; ++i) {
        cout << parent[i] << '\n';
    }

    return 0;
}
