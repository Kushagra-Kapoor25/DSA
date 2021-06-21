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


int maxWidthIter(Node *root)
{
	if (root == NULL)
		return 0;
	queue<Node *>q;
	q.push(root);
	int res = 0;
	while (!q.empty())
	{
		int count = q.size();
		res = max(res, count);
		for (int i = 0; i < count; i++)
		{
			Node *curr = q.front();
			q.pop();
			if (curr->left != NULL)
				q.push(curr->left);
			if (curr->right != NULL)
				q.push(curr->right);
		}
	}
	return res;
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
	//root->right->left = new Node(6);
	//root->right->right = new Node(7);
	cout << maxWidthIter(root) << endl;
	return 0;
}

// Time complexity: O(n)