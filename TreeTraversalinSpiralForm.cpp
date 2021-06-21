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
void traverseSpiral(Node *root)
{
	if (root == NULL)
		return;

	int i = 0;
	queue<Node *>q;
	q.push(root);
	while (!q.empty())
	{
		Node *curr = q.front();
		q.pop();
		if (i % 2 == 0)
		{
			if (curr->right != NULL)
				q.push(curr->right);
			if (curr->left != NULL)
				q.push(curr->left);
		}
		else
		{
			if (curr->left != NULL)
				q.push(curr->left);
			if (curr->right != NULL)
				q.push(curr->right);
		}
		i++;
		cout << curr->data << " ";
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);
	root->left->left->left = new Node(8);
	root->right->left->left = new Node(9);
	traverseSpiral(root);
	return 0;
}