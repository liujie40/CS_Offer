void   freenode(StaticList space, int *av, int k)
/*���±�Ϊ k�Ŀ��н����뵽��������*/
{
	space[k].cursor=*av;
	*av=k;
}