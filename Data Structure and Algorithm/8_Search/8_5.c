void  CreateBST(BSTree  *bst)
/*�Ӽ�������Ԫ�ص�ֵ��������Ӧ�Ķ���������*/
{ 
	KeyType key;
	*bst=NULL;
	scanf("%d", &key);
	while (key!=ENDKEY)   /*ENDKEYΪ�Զ��峣��*/
	{
		InsertBST(bst, key);
		scanf("%d", &key);
	}
}