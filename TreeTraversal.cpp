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

// Preorder, Postorder and Inorder are Depth First type
void inorder(Node *root) //Left Root Right
{
	if (root == NULL)
		return;
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void preorder(Node *root) //Root Left Right
{
	if (root == NULL)
		return;
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

void postorder(Node *root) // Left Right Root
{
	if (root == NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}
// Time complexity: O(n)
// Aux space: O(h)
/* where h is the height of the binary tree */


//Level Order Traversal is Breadth First type
void levelOrder(Node *root) //Line by line
{
	if (root == NULL)
		return;
	queue<Node *> q;
	q.push(root);
	while (!q.empty())
	{
		Node *curr = q.front();
		q.pop();
		cout << curr->data << " ";
		if (curr->left != NULL)
			q.push(curr->left);
		if (curr->right != NULL)
			q.push(curr->right);
	}
}
// Time complexity: O(n)
// Aux space: theta(w)
// where w is the width of the binary tree

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	inorder(root);
	cout << endl;
	preorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	levelOrder(root);
	return 0;

}
