#include<stdio.h>
#include<stdlib.h>
# define MAX 100
void input(int *,int);
void output(int *,int);
void insert_element(int *,int,int,int);
void quit();
int main()
{
    int a[MAX],pos,element,n;
    char choice;
    printf("enter how many element in array:");
    scanf("%d",&n);
    while(1)
{
     printf("\n Menu: \n input: i  \n output: o  \n insert element: E\n quit: q \n ");
     printf("\n enter choice:");
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
       case'E':
       case'e':
               insert_element(a,n,pos,element);
               printf("after insertion:");
               output(a,n+1);
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
void insert_element(int *p,int n,int pos,int element)
{
     int i;
     printf("\n enter element which u want to insert:");
     scanf("%d",&element);
     printf("\n enter position where u want to insert:");
     scanf("%d",&pos);
     for(i=n-1;i>=pos-1;i--)
{
       *(p+i+1)=*(p+i);
}
p[pos-1]=element;
n++;
}
void quit()
{
    exit(0);
}
   /*    OUTPUT 
     enter how many element in array:3

 Menu:
 input: i
 output: o
 insert element: E
 quit: q

enter choice:i
enter element in array:1

enter element in array:2

enter element in array:3

 Menu:
 input: i
 output: o
 insert element: E
 quit: q

enter choice:o
1
2
3
 Menu:
 input: i
 output: o
 insert element: E
 quit: q

enter choice:e
enter element which u want to insert:9

enter position where u want to insert:1
after insertion:
9
1
2
3
 Menu:
 input: i
 output: o
 insert element: E
 quit: q

enter choice:q
--------------------------------                   */
