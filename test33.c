#include"sort.h"
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
	SQ *sq = (SQ *)malloc(sizeof(SQ));
	initsort(sq);
	creatort(sq);
	printf("原始数据为:\n");
	printsort(*sq);
	printf("冒泡排序后:\n");
	bubblesort(*sq);
        printf("插入排序后;\n");
	insertsort(*sq);
	return 0;
}
