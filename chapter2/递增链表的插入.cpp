#include<stdio.h>
#include<stdlib.h>

typedef struct Node *NodePtr;
struct Node{  //�������������ݽṹ 
	int val;
	NodePtr next;
};

int main(void){
	int N,M;
	int i;
	NodePtr head,rear,pre,tmp;
	head=rear=(NodePtr)malloc(sizeof(struct Node));
	//Ϊ�������㣬������ͷ�ս�� 
	head->next = NULL;
	
	scanf("%d %d",&N,&M);
	for(i=0;i<N;i++){  //�������� 
		pre=(NodePtr)malloc(sizeof(struct Node));  //�����½�� 
		pre->next = NULL;
		scanf("%d",&pre->val);
		rear->next=pre;  //�½���������β�� 
		rear=pre;
	}
	//����Ѱ��M����λ�õ�ǰ����� 
	pre=head;
	while(pre->next != NULL&&pre->next->val < M){
		pre=pre->next;
	}
	//���²���M 
	tmp=(NodePtr)malloc(sizeof(struct Node));  //�����½�� 
	tmp->val=M;
	tmp->next=pre->next;  //�����½�� 
	pre->next=tmp;
	if(pre==rear){  //�����βʱ�����޸�rear 
		rear=tmp;
	}
	//������������������� 
	//�����rear����pre��tmp���е�ͨ������ 
	rear=head->next;
	printf("%d",rear->val);
	for(rear=rear->next;rear!=NULL;rear=rear->next){
		printf(" %d",rear->val);
	}
	printf("\n");
	return 0;
}
