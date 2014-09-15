#include<stdio.h>
int main ()
{
    int i,j,t;
    int a[10];
    printf("请输入10个数字：\n");
    for(i=0;i<10;i++)
    {
         scanf("%d",&a[i]);
    }
    
    for(i=0;i<9;i++)
    {
         for(j=i+1;j<10;j++)
         {
             if(a[i]<a[j])
             {
                  t=a[j];
                  a[j]=a[i];
                  a[i]=t;             
            }
         }                
    }
    printf("排序后的顺序为：\n");
    for(i=0;i<10;i++)
    printf("%2d",a[i]);
     getch();  
    
return 0;    
}
