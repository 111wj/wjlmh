/*#include<stdio.h>//1.���������������������򡢺�������ַ�ʽ��������������������Ľ����
//2.�ڶ������в���ֵΪx�Ľ�㣬�Ա�д�㷨��ӡֵΪx�Ľ����������ȣ�����ֵΪx�Ľ�㲻����1����
#include<stdlib.h>
typedef struct node
{
	char data;
	struct node *lchild,*rchild;
}Bnode,*Btree;

Btree insert(Btree root,int node)
{
	Btree newnode,currentnode,parentnode;
	newnode=(Btree)malloc(sizeof(Bnode));
	newnode->data=node;
	newnode->rchild=NULL;
	newnode->lchild=NULL;
	if(root==NULL)
	return newnode;
	else
	{
		currentnode=root;
		while(currentnode!=NULL)
		{
			parentnode=currentnode;
			if(currentnode->data>node)
				currentnode=currentnode->lchild;
			else
				currentnode=currentnode->rchild;
		}
		if(parentnode->data>node)
			parentnode->lchild=newnode;
		else
			parentnode->rchild=newnode;
	}
	return root;
}
Btree creat(int *data,int len)
{
	Btree root=NULL;
	int i;
	for(i=0;i<len;i++)
		root=insert(root,data[i]);
	return root;
}
void preorder(Btree p)
{
	if(p!=NULL)
	{
		printf("%d  ",p->data);
		preorder(p->lchild);
		preorder(p->rchild);
	}

}
void inorder(Btree p)
{
 if(p!=NULL)
 {
	 inorder(p->lchild);
	 printf("%d  ",p->data);
	 inorder(p->rchild);
 }
}
void postorder(Btree p)
{
	if(p!=NULL)
	{
		postorder(p->lchild);
		postorder(p->rchild);
		printf("%d  ",p->data);  
}
}
void main()
{
	Btree root=NULL;
	int i,index=0;
	int value;
	int node[20];
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
	printf("please input the element of tree (exit for 0)\n");
	scanf("%d",&value);
	while(value!=0)
	{
		node[index]=value;
		index++;
		scanf("%d",&value);
	}
	root=creat(node,index);
	printf("ǰ�����еĽ��Ϊ��");
	preorder(root);
	printf("\n");
	printf("�������еĽ��Ϊ��");
	inorder(root);
	printf("\n");
	printf("�������еĽ��Ϊ��");
	postorder(root);
	printf("\n");
}
*/

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int ltag;
	int rtag;
	char data;
	struct node *lchild,*rchild;
}Threadnode,*ThreadTree;
ThreadTree creat()
{
	ThreadTree p;
	char ch;
	ch=getchar();
	while((ch=getchar())!='\n')
	{
		p=(ThreadTree)malloc(sizeof(Threadnode));
        p->data=ch;
	    p->lchild=creat();
		p->rchild=creat();
}
	p=NULL;
	return p;
}
main()
{
}
