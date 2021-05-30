#include <bits/stdc++.h>
#include "sll.h"
using namespace std;
void printNthFromEnd(Node *head, int n)
{
	int len = 0;
	for (Node *curr = head; curr != NULL; curr = curr->next)
		len++;
	if (len < n)
	{
		cout << -1;
		return;
	}
	Node *curr = head;
	for (int i = 1; i < (len - n + 1); i++)
		curr = curr->next;
	cout << (curr->key) << " ";
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Node *head = NULL;
	int n;
	cin >> n;
	head = insertEnd(head, 1);
	head = insertEnd(head, 2);
	head = insertEnd(head, 3);
	head = insertEnd(head, 4);
	head = insertEnd(head, 5);
	printList(head);
	printNthFromEnd(head,  n);
	return 0;
}