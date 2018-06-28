#include<stdio.h>
#include<stdlib.h>
#define max 5
void add(int *,int,int *,int *,int);
void del(int *,int,int *,int *);
void display(int *,int *,int *);
void quit(void);
int main()
{
	int queue[max],front=-1,rear=-1,i,element;
	char choice;
    while (1)
	{
		printf("\nMENU:  \n add: s \n del: p \n display: d");
        printf("\nEnter your choice =");
		choice=getche();
		switch(choice)
		{
            case 'd':
			case 'D':
				    display(queue,&front,&rear);
				    break;

			case 's':
			case 'S':
				     add(queue,max,&front,&rear,element);
				     break;
            case 'p':
			case 'P':
				    del(queue,max,&front,&rear);
				    break;

			case 'q':
			case 'Q':
				    quit();
		}
	}
	return 0;
}
void add(int *p,int l,int *f,int *r,int element)
{
   if(*r==l-1)
   {
      printf("queue is full");
      return;
   }
   if(*f==-1)
   {
      *f=0;
      *r=0;
   }
   else
   {
     (*r)++;
   }
   printf("\nenter element:");
   scanf("%d",&element);
   p[*r]=element;
}
void del(int *p,int l,int *f,int *r)
{
  int temp;
  if(*f==-1)
  {
    printf("\nqueue is empty");
    return;
  }
  temp=p[*f];
  if(*f==*r)
  {
   *f=-1;
   *r=-1;
  }
  else
  {
  (*f)++;
  }
}
void display(int *p,int *front,int *rear)
{
   int i;
   if(*front==-1)
   {
      printf("empty");
      return;
   }
   else
   {
      for(i=*front;i<=*rear;i++)
      {
        printf("\n%d",p[i]);
      }
   }
}
void quit()
{
	exit(0);
}
/* OUTPUT
  
MENU:
 add: s
 del: p
 display: d
Enter your choice =s
enter element:8

MENU:
 add: s
 del: p
 display: d
Enter your choice =s
enter element:9

MENU:
 add: s
 del: p
 display: d
Enter your choice =s
enter element:4

MENU:
 add: s
 del: p
 display: d
Enter your choice =d
8
9
4
MENU:
 add: s
 del: p
 display: d
Enter your choice =p
MENU:
 add: s
 del: p
 display: d
Enter your choice =p
MENU:
 add: s
 del: p
 display: d
Enter your choice =d
4
MENU:
 add: s
 del: p
 display: d
Enter your choice =q            */
