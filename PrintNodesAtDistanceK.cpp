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

void printNodeAtDistKIterative(Node *root, int k)
{
	if (root == NULL)
		cout << -1;
	queue<Node *> q;
	q.push(root);
	int l = 1;
	while (!q.empty())
	{
		int size = q.size();
		for (int i = 0; i < size; i++)
		{
			Node *curr = q.front();
			q.pop();
			if (l == k + 1)
				cout << curr->data << " ";
			if (curr->left != NULL)
				q.push(curr->left);
			if (curr->right != NULL)
				q.push(curr->right);
		}
		l++;
	}
}

void printNodeAtDistK(int k, Node *root)
{
	if (root == NULL)
		return;
	if (k == 0)
		cout << root->data << " ";
	else
	{
		printNodeAtDistK(k - 1, root->left);
		printNodeAtDistK(k - 1, root->right);
	}

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
	printNodeAtDistK(2, root);
	cout << endl;
	printNodeAtDistKIterative(root, 2 );
	return 0;
}