int  search (Mbtree  mbt,  KeyType  key )
/*��mbtָ��Ľ���У�Ѱ��С�ڵ���key�����ؼ������*/
{
	int n,i;
	n = mbt->keynum ;
	i = 1 ;
	while (i <= n && mbt->key[i] <= key )  i ++;
	return (i - 1);    /* ����С�ڵ���key�����ؼ������ ��Ϊ0 ʱ��ʾӦ��
		�����֧�ң�Խ��ʱ��ʾӦ�����ҷ�֧�� */
}