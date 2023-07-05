#include<stdio.h>
#define size 50
int binary_search(int[],int,int);
int main(){
 int a[size],i,n,s,pos;
 printf("Enter the size of Array: ");
 scanf("%d",&n);
 printf("\nENTER ELEMENT'S IN SORTED ORDER\n");
 for(i=0;i<n;i++){
 printf("\nEnter Any No: ");
 scanf("%d",&a[i]);
 }
 printf("\nEnter Value for Searching:");
 scanf("%d",&s);
 pos=binary_search(a,n,s);
 if(pos==-1){
 printf("\n%d ->Not Found\n",s);
 }
 else{
 printf("\n%d ->Found in %dth Position\n",s,(pos+1));
 }
 return 0;
}
int binary_search(int a[],int n,int s){
 int lb,ub,mid,pos=-1;
 lb=0;
 ub=n-1;
 while(lb<=ub){
 mid=(lb+ub)/2;
 if(a[mid]==s){
 return mid;
 }
 if(s>a[mid]){
 lb=mid+1;
 }
 else{
 ub=mid-1;
 }
 }
 return pos;
}
