#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node *next;

};
 void reversealtgrp(node *root , int k)
{
	node *temp = root;
	
	while(temp != NULL )
	{
		node *temp1 = temp;
		vector<long long> v;
		for(int i=0;i<k && temp1 != NULL;i++)
		{
			v.push_back(temp1->data);
			temp1=temp1->next;
		}
		node *pivot = temp1;
		while(!v.empty())
		{
			temp->data = v.back();
			v.pop_back();
			temp=temp->next;
		}
		for(int i=0;i<k && pivot != NULL;i++)
		{
			pivot= pivot->next;
		}
		temp=pivot;

	}


}
 
node *reverseggrp(node *root,int k)
{
	int count =k;
node *temp= root;
node *prev =NULL;
node *next1 = root;
while(next1 != NULL && count != 0)
{
next1 = temp->next;
temp->next=prev;
prev = temp;
temp = next1; 
count--;
}
if(next1 != NULL)
{
root->next = reverseggrp(next1,k);
}
return prev;
}
node *mergealt(node *root , node *root1)
{ 
	node *p = root;
	node *q= root1;
	node *temp1 = NULL ;node *temp2 = NULL;
	while(p != NULL && q != NULL)
	{
		temp1= p->next;
		temp2 = q->next;
		q->next = p->next;
		p->next = q;
		p=temp1;
		q=temp2;
	}

	return root;


}
node *deletelast(node *root,int key){
	node *temp=root;
	node *last;
	while(temp!=NULL){
		if(temp->data==key)
			last=temp;
		temp=temp->next;
	}
	node *p=root;
	while(p->next!=last){
		p=p->next;
	}
	node *q=last;
	p->next=q->next;
	q->next=NULL;
	free(q);
	return root;

}
node *middle(node *root)
{
	node *temp= root;
	node *temp1=root;
	node *p = root;
	while(temp1->next != NULL)
	{
		temp=temp->next;
		temp1=temp1->next->next;
	}
	cout<<temp->data;
	while(p->next != temp)
	{
		p= p->next;
	}
	node *q=temp;
	p->next= q->next;
	q->next=NULL;
	free(q);
	return root;

}
void palindrome(node *root)
{
	stack <int> s;
	node *temp = root;
	node *temp1 = root;

	while(temp != NULL)
	{
		s.push(temp->data);
		temp=temp->next;
	}
	
	while( (s.top() == temp1->data) && temp1 != NULL)
	{
		s.pop();
		temp1=temp1->next;
		if(s.empty())
		{
			cout<<"palindrom";
			return;
		}
	}
	cout<<"not a palindrome";



}
node *rotate(node *root,int k)
{
	node *temp = root;
	node *temp1 = root;
	int count =k-1;
	while(temp->next != NULL && count != 0)
	{
		temp=temp->next;
		count--;
	}
	while(temp1->next != NULL)
	{
		temp1 = temp1->next;
	}
	temp1->next=root;
	root=temp->next;
	temp->next = NULL;
	return root;

}
node *insert(int key,node *root)
{
	node *temp1 = new node();
	temp1->data=key;
	temp1->next= NULL;
	node *temp = root;
	if(root == NULL)
		root=temp1;
	else
	{
		while(temp -> next != NULL)
		{
			temp = temp->next;
		}temp->next= temp1;
	}
	return root;

}
node *deletelist(node *root) 
{
	while(root != NULL)
	{
	node *temp = root;
	//temp->next = NULL;
	free(temp);
	root = root->next;
	}
	return root;

}
node *reverse(node *root)
{
	node *prev = NULL;
	node *temp = root;
	node *temp1 =root;
	while(temp1->next != NULL)
	{
	

	temp1= temp1->next;
	temp->next = prev;
	prev = temp ;
	temp=temp1;

	}
	temp->next= prev;
	root = temp;
	return root; 
}
node *remmovedups(node *root)
{
	node *temp= root ;
	while(temp->next != NULL)
	{
	while(temp->data != temp->next->data) // 1 2 3 3 3 4  5 6 7  
	{
		temp=temp->next;
	if(temp->next == NULL)
	{
		return root;
	}
	}

	node *p=temp;
	node *q = temp->next;
	p->next=q->next;
	q->next=NULL;
	free(q);
	
	}
	return root;
}
node *deletenafterm(int n,int m,node *root) //1 2 3 4  5 6 7 8 m=3rd node n=2 
{
	node *temp=root;
	int count1=n;
	int count2=m-2;
	while(temp != NULL)
	{

	while(count2 !=0 )
	{
		temp=temp->next;
		count2--;
	}count2=m-2;
	while(count1 != 0 && temp->next != NULL)
	{
		node *p=temp;
		node *q=temp->next;
		p->next= q->next;
		q->next = NULL;
		free(q);
		count1--;
	}
	count1=n;
	temp=temp->next;
}
return root;
}
void display(node *root)
{
	node *temp = root;
	while (temp != NULL)
	{
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
}
node *addone(node *root)
{
	root=reverse(root);
	node *temp=root;
	while(temp->data==9 && temp->next != NULL)
	{
		temp->data=0;
		temp=temp->next;
	}
	if(temp->data==9 && temp->next == NULL)
	{
		temp->data=0;
		node *head= new node();
		head->data=1;
		head->next=root;
		root=head;
		return root;
	}
	temp->data= temp->data+1;
	root=reverse(root);
	return root;
	


}
int main()
{
	node *root = NULL;
	root= insert(5,root);
	root= insert(4,root);
	root= insert(6,root);
	root= insert(3,root);
	root= insert(7,root);
	root= insert(8,root);
	root= insert(5,root);
	//node *root1 = NULL;
	//root1 = insert(10,root1);
	//root1 = insert(20,root1);
	//root1 = insert(30,root1);
	//display(root);
	//display(root1);
	display(root);
	reversealtgrp(root,2);
	display(root);
/*	root = reverse(root);
	display(root); */
	/*root = deletenafterm(2,3,root);
	cout<<"after deleting";
	display (root);*/
	//root=addone(root);
	//root = remmovedups(root);
	//palindrome(root);
	// = deletelast(root,2);
	//display(root);
	//display(root);
	return 0;
}