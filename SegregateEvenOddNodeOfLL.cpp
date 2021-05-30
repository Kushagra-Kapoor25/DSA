#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *next;
	Node()
	{
		next = NULL;
	}
};
void printlist(Node *head)
{
	Node *curr = head;
	while (curr != NULL)
	{
		cout << curr->data << " ";
		curr = curr->next;
	}
	cout << endl;
}
Node *segregate(Node *head)
{
	Node *eS = NULL, *eE = NULL, *oS = NULL, *oE = NULL;
	for (Node *curr = head; curr != NULL; curr = curr->next)
	{
		int x = curr->data;
		if (x % 2 == 0) {
			if (eS == NULL)
			{
				eS = curr;
				eE = eS;
			} else
			{
				eE->next = curr;
				eE = eE->next;
			}
		}
		else
		{
			if (oS == NULL)
			{
				oS = curr;
				oE = oS;
			}
			else
			{
				oE->next = curr;
				oE = oE->next;
			}
		}
	}
	if (oS == NULL || eS == NULL)
		return head;
	eE->next = oS;
	oE->next = NULL;
	return eS;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		Node *head = new Node();
		Node *curr = head;
		while (n--)
		{
			int element;
			cin >> element;
			curr->data = element;
			if (n == 0)
				break;
			curr->next = new Node();
			curr = curr->next;
		}
		printlist(head);
		head = segregate(head);
		printlist(head);
	}
	return 0;
}
//Time Complexity: O(n)
// Traveses the list only once