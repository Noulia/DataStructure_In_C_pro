#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define MAX 100
void input(int *,int);
void output(int *,int);
void delete_element(int *,int,int);
void quit();
int main()
{
    int a[MAX],element,n,m;
    printf("enter how many element in array:");
    scanf("%d",&n);
    char choice;
    while(1)
{
     printf("\n Menu: \n input: i  \n output: o  \n delete element: d\n quit: q \n ");
     printf("\n Enter choice:");
	 choice=getche();
     switch(choice)
     {
       case'i':
       case'I':
               input(a,n);
               break;
       case'o':
       case'O':
               output(a,n);
               break;
       case'd':
       case'D':
               delete_element(a,n,element);
               printf("\n after deletion:");
               output(a,n-1);
               break;
       case'q':
       case'Q':
                quit();

                break;
     }
     
}
return 0;
}
void input(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
{
     printf("\n enter element in array:");
     scanf("%d",p+i);
}
}
void output(int *p,int n)
{
 int i;
 for(i=0;i<n;i++)
{
     printf("\n%d\t",*(p+i));
}
}
void  delete_element(int *p,int n,int element)
{
	  int i,found,pos;
          printf("\n enter element which u want to delete:");
          scanf("%d",&element);
          for(i=0;i<n;i++)
          {
                if(p[i]==element)
{
         found=1;
         pos=i;
         break;
}
}
  if (found==1)
{
                
          for(i=pos;i<n-1;i++)
         {
      	   p[i]=p[i+1];
	  }
	  n=n-1;
}
else 
  printf("\n element is not present"); 
}
void quit()
{
    exit(0);
}
