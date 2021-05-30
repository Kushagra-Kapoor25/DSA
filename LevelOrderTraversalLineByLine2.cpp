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


void levelOrderLbL(Node *root)
{

	if (root == NULL)
		return;
	queue<Node *> q;
	q.push(root);
	while (!q.empty())
	{
		int count = q.size();
		for (int i = 0; i < count; i++)
		{
			Node *curr = q.front();
			q.pop();
			cout << curr->data << " ";
			if (curr->left != NULL)
				q.push(curr->left);
			if (curr->right != NULL)
				q.push(curr->right);
		}
		cout << "\n";
	}
}
// Based on the fact that when we traverse the last element of that level then
// the next level is completely there in the queue.
// Time complexity: O(n)
// Aux space: O(width of the tree)

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

	levelOrderLbL(root);

	return 0;
}