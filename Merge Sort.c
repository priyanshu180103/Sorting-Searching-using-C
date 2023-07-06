#include<stdio.h>
#define size 20
int array[size];
void merge_sort(int,int);
void merge(int,int,int);
int main(){
 int i,n;
 printf("Enter the number of elements : ");
 scanf("%d",&n);
 for(i=0;i<n;i++){
 printf("Enter element %d : ",i+1);
 scanf("%d",&array[i]);
 }
 printf("\n==========Unsorted List Is==========\n");
 for( i = 0 ; i<n ; i++){
 printf("%d\t", array[i]);
 }
 printf("\n====================================\n");
 merge_sort( 0, n-1);
 printf("\n==========Sorted List Is==========\n");
 for( i = 0 ; i<n ; i++){
 printf("%d\t", array[i]);
 }
 printf("\n====================================\n");
}
void merge_sort( int low, int high ){
 int mid;
 if( low != high ){
 mid = (low+high)/2;
 merge_sort( low , mid );
 merge_sort( mid+1, high );
 merge( low, mid, high );
 }
}
void merge( int low, int mid, int high ){
 int temp[size];
 int i = low;
 int j = mid +1 ;
 int k = low ;
 while( (i <= mid) && (j <=high) ){
 if(array[i] <= array[j])
 temp[k++] = array[i++] ;
 else
 temp[k++] = array[j++] ;
 }
 while( i <= mid ){
 temp[k++]=array[i++];
 }
 while( j <= high ){
 temp[k++]=array[j++];
 }
 for(i= low; i <= high ; i++){
 array[i]=temp[i];
 }
}
