int InsList(LinkList L,int i,ElemType e)
/*�ڴ�ͷ���ĵ�����L�е�i��λ�ò���ֵΪe���½��*/
{  
	Node *pre,*s;
	int k;
	pre=L;  
	k=0;                     /*��"ͷ"��ʼ�����ҵ�i-1�����*/
	while(pre!=NULL&&k<i-1)  /*��δ������δ�鵽��i-1��ʱ�ظ����ҵ�preָ���i-1��*/ 
	{ 
		pre=pre->next;
		k=k+1; 
	}									/*���ҵ�i-1���*/
	if(!pre)      /*�統ǰλ��preΪ�ձ������껹δ������i����˵������λ�ò�����*/ 
	{ 
		printf("����λ�ò�����!");
		return ERROR;
	}
	s=(Node*)malloc(sizeof(Node));   /*����һ���µĽ��S */
	s->data=e;                       /*ֵe����s��������*/
	s->next=pre->next;				/*�޸�ָ�룬��ɲ������*/
	pre->next=s;
	return OK;
}