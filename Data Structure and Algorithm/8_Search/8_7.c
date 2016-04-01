BSTree  SearchBST(BSTree bst, KeyType key)
/*�ڸ�ָ��bst��ָ����������bst�ϣ����ҹؼ��ֵ���key�Ľ�㣬�����ҳɹ�������ָ���Ԫ�ؽ��ָ�룬���򷵻ؿ�ָ��*/
{ 
	BSTree q;
	q=bst;
	while(q)
	{
		if (q->key == key) 
			return q;  /*���ҳɹ�*/
		if (q->key > key)  
			q=q->lchild;  /*���������в���*/
		else  
			q=q->rchild;  /*���������в���*/
	}
	return NULL; /*����ʧ��*/
}/*SearchBST*/