void inorder(BiTree root);
{
   int top=0; p=bt;
   L1: if (p!=NULL)       /* ���������� */       
   { 
     top=top+2;    
     if(top>m) return;       /*ջ���������*/
     s[top-1]=p;            /* ���������ջ */    
     s[top]=L2;             /* ���ص�ַ��ջ */
     p=p->LChild;           /* ���²������ֵ */
     goto L1;               /* ת��ʼ */
   L2:  Visit(p->data);     /* ���ʸ� */
     top=top+2;
     if(top>m) return;       /*ջ���������*/;
     s[top-1]=p;            /* ���������� */
     s[top]=L3;
     p=p->RChild;
     goto L1;
   }
   L3: if(top!=0)      
  { 
    addr=s[top];
    p=s[top-1];            /* ȡ�����ص�ַ */
    top=top-2;             /* �˳�������� */
    goto addr;
  }
}
/*�㷨a*/

void inorder(BiTree root)   /* ���������������rootΪ�������ĸ���� */
{
	int top=0; 
	BiTree p;
	BiTree s[Stack_Size];
	int m;
	m = Stack_Size-1;
	p = root;
	do
	{
		while(p!=NULL)
		{ 
			if (top>m) return;
			top=top+1;  
			s[top]=p;
			p=p->LChild;
		};  /* ���������� */
		if(top!=0)
		{ 
			p=s[top];
			top=top-1;
			Visit(p->data);  /* ���ʸ���� */
			p=p->RChild;  /* ���������� */
		}   
	}
	while(p!=NULL || top!=0);
}
           /*�㷨b*/


void  InOrder(BiTree root) /* ��������������ķǵݹ��㷨 */
{
	SeqStack S;
	BiTree p;
	InitStack (&S);
	p=root;
	while(p!=NULL || !IsEmpty(&S))
	{ 
		if (p!=NULL)  /* ��ָ���ջ������������ */
		{
			Push(&S,p);
			p=p->LChild;
		}
		else
		{  /*��ָ����ջ�����ʸ���㣬����������*/
			Pop(&S,&p); 
			Visit(p->data);  
			p=p->RChild;
		}
	}
}
            /*�㷨c*/