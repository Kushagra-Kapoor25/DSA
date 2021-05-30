#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *left, *right;
	Node(int key)
	{
		data = key;
		left = right = NULL;
	}
};

int height(Node *root)
{
	if (root == NULL)
		return 0;
	else
		return 1 + max(height(root->left), height (root->right));

}

bool isBalanced(Node *root)
{
	if (root == NULL)
		return true;
	int lh = height(root->left);
	int rh = height(root->right);
	return (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right));
}
// Time complexity: O(n^2)


int isBalancedES(Node *root)
{
	if (root == NULL)
		return 0;
	int lh = isBalancedES(root->left);
	int rh = isBalancedES(root->right);
	if (lh == -1)
		return -1;
	if (rh == -1)
		return -1;
	if (abs(lh - rh) > 1)
		return -1;
	else
		return max(lh, rh) + 1;
}
// Time complexity: O(n)

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Node *root = new Node(20);
	root->left = new Node(8);
	root->right = new Node(12);
	root->left->left = new Node(3);
	root->left->right = new Node(5);
	root->right->left = new Node(4);
	root->right->right = new Node(1);

	if (isBalanced(root))
		cout << "Yes";
	else
		cout << "No";
	cout << "\n";
	if (isBalancedES(root))
		cout << "Yes";
	else
		cout << "No";

	return 0;
}