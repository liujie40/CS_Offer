int PostTreeDepth(BiTree bt)   /* ���������������ĸ߶ȵݹ��㷨 */
{
	int hl,hr,max;
	if(bt!=NULL)
	{
		hl=PostTreeDepth(bt->LChild);  /* ������������� */
		hr=PostTreeDepth(bt->RChild);  /* ������������� */
		max=hl>hr?hl:hr;              /* �õ�����������Ƚϴ���*/
		return(max+1);               /* ����������� */
	}
	else return(0);             /* ����ǿ������򷵻�0 */
}