#include <bits/stdc++.h>
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


bool childSumProp(Node *root)
{
	if (root == NULL)
		return true;
	if (root->left == NULL && root->right == NULL)
		return true;
	int sum = 0;
	if (root->left != NULL)
		sum += root->left->data;
	if (root->right != NULL)
		sum += root->right->data;
	return (root->data == sum && childSumProp(root->left) && childSumProp(root->right));
}

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

	if (childSumProp(root))
		cout << "Yes\n";
	else
		cout << "No\n";
	return 0;
}