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



Node *BTToDLL(Node *root)
{
	if (root == NULL)
		return root;
	static Node *prev = NULL;
	Node *head = BTToDLL(root->left);
	if (prev == NULL)
		head = root;
	else
	{
		root->left = prev;
		prev->right = root;
	}
	prev = root;
	BTToDLL(root->right);
	return head;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Node *root = new Node(10);
	root->left = new Node(5);
	root->right = new Node(20);
	root->right->left = new Node(30);
	root->right->right = new Node(35);

	Node *curr = BTToDLL(root);
	while (curr != NULL)
	{
		cout << curr->data << " ";
		curr = curr->right;
	}
	return 0;
}