void insert(Mbtree mbp,	int ipos, KeyType key,  Mbtree rp)
/* ��mbp->key[ipos +1]������key, ��mbp->ptr[ipos+1]������rp  */
{
	int j;
	for (j=mbp->keynum; j>= ipos +1 ; j--)
	{ 
		mbp->key[j+1]=mbp->key[j];
		mbp->ptr[j+1]=mbp->ptr[j];
	}
	mbp->key[ipos+1]=key;
	mbp->ptr[ipos+1]=rp;
	mbp->keynum++;
}