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
void leftViewIter(Node *root)
{
	queue<Node *>q;
	q.push(root);
	while (!q.empty())
	{
		int size = q.size();
		for (int i = 0; i < size; i++)
		{
			Node *curr = q.front();
			q.pop();
			if (curr->left != NULL)
				q.push(curr->left);
			else if (curr->right != NULL)
				q.push(curr->right);
			cout << curr->data << " ";
		}
	}
}
void leftView(Node *root)
{
	if (root == NULL)
		return ;
	cout << root->data << " ";
	if (root->left != NULL)
		leftView(root->left);
	else
		leftView(root->right);
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->left->left = new Node(40);
	root->left->right = new Node(50);
	root->right->left = new Node(60);
	root->right->right = new Node(70);
	leftViewIter(root);
	cout << endl;
	leftView(root);
	return 0;
}