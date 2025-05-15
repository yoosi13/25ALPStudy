#include <iostream>
#include <vector>
using namespace std;

vector<pair<char, char>> tree;

void preorder(char x)
{
	if (x == '.')
	{
		return;
	}
	cout << x;
	preorder(tree[x - 'A'].first);
	preorder(tree[x - 'A'].second);
}
void inorder(char x)
{
	if (x == '.')
	{
		return;
	}

	inorder(tree[x - 'A'].first);
	cout << x;
	inorder(tree[x - 'A'].second);
}
void postorder(char x)
{
	if (x == '.')
	{
		return;
	}

	postorder(tree[x - 'A'].first);
	postorder(tree[x - 'A'].second);
	cout << x;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	
	tree.resize(N);
	for (int i = 0; i < N; i++)
	{
		char node, left, right;
		cin >> node >> left >> right;

		tree[node - 'A'] = { left, right };
	}

	preorder('A');
	cout << "\n";
	inorder('A');
	cout << "\n";
	postorder('A');
	cout << "\n";

	return 0;
}
