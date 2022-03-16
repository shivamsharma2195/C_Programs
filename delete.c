// Write a program (wap) to delete an element at desired position from an array in c language

#include<stdio.h>
int main(){
  int a[50],i,pos,size;
  printf("\nEnter size of the array: ");
  scanf("%d",&size);

  printf("\nEnter %d elements in to the array: ",size);
  for(i=0;i<size;i++)
            scanf("%d",&a[i]);

  printf("\nEnter position where to delete: ");
  scanf("%d",&pos);

  i=0;
  while(i!=pos-1)
            i++;
  while(i<10){
            a[i]=a[i+1];
            i++;
  }

  size--;
  for(i=0;i<size;i++)
            printf(" %d",a[i]);

  return 0;
}
