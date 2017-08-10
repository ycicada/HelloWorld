#include <iostream>
using namespace std;

struct Node
{
int data;
Node * next;
};

Node *head,*p,*r;
int x;
/*Á´±í*/ 
/*
int main()
{
	cin>>x;
	head = new Node;
	r = head;
	while(x!=-1)
	{
		p = new Node;
		p->data =x;
		p->next = NULL;
		r->next = p;
		r=p;
		cin>>x;	
	}
	p = head->next;
	while(p->next != NULL)
	{
		cout<<p->data<<" ";
		p = p->next;
	}
	cout<<p->data<<endl;
	return 0;
}
*/
int len(Node *head)
{
	int n=0;
	p=head;
	while(p!=NULL)
	{
		n++;
		p = p->next;
	}
	return n;
}
int main()
{
	cin>>x;
	head = new Node;
	head->data = x;
	r = head;
	while (true)
	{
		cin>>x;
		if (x==-1) break; 
		p = new Node;
		p->data =x;
		p->next = NULL;
		r->next = p;
		r=p;
	}
	p = head;
	while(true)
	{		
		cout<<p->data<<" ";
		if(p->next == NULL) break;
		p = p->next;
	}
	cout<<len(head)<<endl;
	return 0;
}

