#include<stdio.h>
#define size 50
int linear_search(int[],int,int);
int main(){
 int a[size],n,s,i,pos;
 printf("Enter the size of Array: ");
 scanf("%d",&n);
 for(i=0;i<n;i++){
 printf("Enter Any No: ");
 scanf("%d",&a[i]);
 }
 printf("Enter any value for searching: ");
 scanf("%d",&s);
 pos=linear_search(a,n,s);
 if(pos==-1){
 printf("%d->Not Found\n");
 }
 else{
 printf("%d->found in %dth Position\n",s,(pos+1));
 }
 return 0;
}
int linear_search(int a[],int n,int s){
 int i,p=-1;
 for(i=0;i<n&&p==-1;i++){
 if(a[i]==s){
 p=i;
 }
 }
 return p;
}
