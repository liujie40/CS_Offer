int	DlinkDel(DoubleList L,int i,ElemType *e)
{
	DNode  *p;
	int k;
	p=L;  
	k=0;                     /*��"ͷ"��ʼ�����ҵ�i�����*/
	while(p->next!=L && k<i)  /*��δ������δ�鵽��i��ʱ�ظ����ҵ�pָ���i��*/ 
	{ 
		p=p->next;
		k=k+1; 
	}								
	if(p->next == L)       
	{ 
		return ERROR;
	}
	else
	{
		*e=p->data;
		p->prior->next=p->next;
		p->next->prior=p->prior;
		free(p);
		return OK;
	}
}
