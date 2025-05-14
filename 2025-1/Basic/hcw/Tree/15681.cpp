#include <iostream>
#include <vector>

using namespace std;

vector<int> tree[100001];
int sub_size[100001];
bool vis[100001];

int dfs(int r)
{
    vis[r] = true;
    sub_size[r] = 1;
    for (int child : tree[r])
    {
        if (!vis[child])
        {
            sub_size[r] += dfs(child);
        }
    }
    return sub_size[r];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, R, Q;
    cin >> N >> R >> Q;
    for (int i = 1; i < N; i++)
    {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs(R);

    for (int i = 0; i < Q; i++)
    {
        int u;
        cin >> u;
        cout << sub_size[u] << "\n";
    }

    return 0;
}
