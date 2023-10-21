# include <stdio.h>
void main()
{
    int a[5]={10,20,30,40,50},up=4,lr=0,f=0,mid,n ;
    printf("n=");
    scanf("%d",&n);
    while(lr<=up)
  {  mid=(lr+up)/2;
  if(a[mid]==n)
  {
    f=1;
    break;
  }
    if(a[mid]<n)
    lr=mid+1;
    else
    up=mid-1;
 } 
 if (f==1)
 printf("n found with location%d",mid);
 else
 printf("not found");
 }