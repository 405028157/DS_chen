#include<stdio.h>
#include<stdlib.h>

typedef struct Node *NodePtr;
struct Node{  //定义链表结点数据结构 
	int val;
	NodePtr next;
};

int main(void){
	int N,M;
	int i;
	NodePtr head,rear,pre,tmp;
	head=rear=(NodePtr)malloc(sizeof(struct Node));
	//为程序处理方便，构建表头空结点 
	head->next = NULL;
	
	scanf("%d %d",&N,&M);
	for(i=0;i<N;i++){  //创建链表 
		pre=(NodePtr)malloc(sizeof(struct Node));  //申请新结点 
		pre->next = NULL;
		scanf("%d",&pre->val);
		rear->next=pre;  //新结点插入链表尾部 
		rear=pre;
	}
	//以下寻找M插入位置的前驱结点 
	pre=head;
	while(pre->next != NULL&&pre->next->val < M){
		pre=pre->next;
	}
	//以下插入M 
	tmp=(NodePtr)malloc(sizeof(struct Node));  //创建新结点 
	tmp->val=M;
	tmp->next=pre->next;  //插入新结点 
	pre->next=tmp;
	if(pre==rear){  //插入表尾时，需修改rear 
		rear=tmp;
	}
	//以下输出插入后的链表结果 
	//下面的rear换成pre，tmp都行得通！！！ 
	rear=head->next;
	printf("%d",rear->val);
	for(rear=rear->next;rear!=NULL;rear=rear->next){
		printf(" %d",rear->val);
	}
	printf("\n");
	return 0;
}
