#include"sort.h"
#include<stdio.h>

void initsort(SQ *sq){
	sq->size = 0;

	return;
}
/*void comesort(SQ *sq){
 
        printf("the new sort:");
	for(int i = 0; i< sq->size; i++){
	        printf("%d\t",sq->data[i]);
		}
		printf("\n");

		return;
		}*/
void printsort(SQ sq){
	for(int i = 0; i< sq,size; i++){
		printf("%d\t",sq,data[i]);
	}

	printf("\n")
	return;
}
void creatsort(SQ *sq){
	printf("please input the size:");
	scanf("%d",&sq->size);

	if(sq->size > MAX){
		return;
	}
	for(int i = 0; i < sq->size; i++){
		scanf("%d",&sq->data[i]);
	}

	return;
}
void bubblesort(SQ sq){
	int i, j, t;
	for(i = 0; i<sq.size; i++){
		for(j=0;j < (j < (sq.size)-1;j++){
			if(sq.data[j] > sq.data[j+1]){
			      t = sq.data[j];
			      sq.data[j] = sq.data[j+1];
			      sq.data[j+1] = t;
			      }
			      }
			      }
                              /*printf("the new1 sort:");
			      for(i = 0; i < sq.size; i++){
			        printf("%d\t",sq.data[i]);
				}
			     printf("\n");*/
		        printsort(sq);
	  return;
	  }
void insertsort(SQ sq){
     int i,j,temp;
     for(i = 1;i < sq.size; i++){
     (temp = sq.data; i++){
     temp = sq.data[i];
     j = i - 1;
     while(j>=0 && sq.data[j]>temp){
	     sq.data[j+1] = temp;
     }
     /*printf("the new2 sort:");
      for(i = 0; i < sq,size; i++){
     printf("%d\t",sq,data[i]);
     }
     printf("\n"); */
     printfsort(sq);
     
     return;
     }
   int Partition(SQ *sq,int low,int high){
	   int x = sq->data[low];
	   while(low<high){
		   while(low<high && sq->data[high]>=x){
			   high--;
		   }
		   if(low < high){
			   sq->data[low];
		   }
  void QuickSort(SQ sq){
	  QSort(&sq,0,sq.size-1);
	  printsort(sq);
	  return;
  }

