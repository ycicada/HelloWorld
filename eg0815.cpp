#include <iostream>
using namespace std;
/*约瑟夫问题
输入：n,m
输出：出列序号
*/
struct Node{
	long data;
	Node *next;
}; 
long n,m;
Node *head,*p,*r;
 
int main()
{
	cin>>n>>m;
	for(long i=1;i<=n;i++)
	{
		p=new Node;
		if(i==1) 
		{
			head=p;
			r=head;
	    } 
		p->data = i;
		p->next = NULL;
		r->next = p;
		r=p;
	}
	r->next = head;
	r = head;
/* debug
	for(long i=1;i<=n;i++)
	{
		cout<<"["<<r<<":"<<r->data<<":"<<r->next<<"]";
		if(i!=n)
			cout<<"==>";
		else
			cout<<endl;
		
		r = r->next; 
	}
	r=head;
*/
	for(long i=1;i<=n;i++)
	{
		for (long j=1;j<=m-2;j++)
			r = r->next;
		cout<<r->next->data<<" ";
		r->next = r->next->next;
		r= r->next;
			
	}
	return 0;
}

