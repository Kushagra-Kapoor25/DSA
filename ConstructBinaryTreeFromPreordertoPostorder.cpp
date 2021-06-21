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

int preIndex = 0;
Node *constructTree(int in[], int  pre[], int is, int ie)
{
	if (is > ie)
		return NULL;
	Node *root = new Node(pre[preIndex++]);
	int inIndex;
	for (int i = is; i <= ie; i++)
	{
		if (in[i] == root->data)
		{
			inIndex = i;
			break;
		}
	}
	root->left = constructTree(in, pre, is, inIndex - 1);
	root->right = constructTree(in, pre, inIndex + 1, ie);
	return root;
}
void inOrder(Node *root)
{
	if (root == NULL)
		return;
	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int in[] = {20, 10, 40, 30, 50};
	int pre[] = {10, 20, 30, 40, 50};
	Node *root = constructTree(in, pre, 0, 4);
	inOrder(root);
	return 0;
}