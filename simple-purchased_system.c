#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
  int ip,qt,ppi,gt=0,st=0,amt_p,change=0;
  int qp;
  char rspn;
do{
   system("cls");
   system("color 0a");
   printf("Number of purchased items: ");
   scanf("%d",&ip);
  for(qt=1;qt<=ip;qt++)
  {
   if(ip==1)
   {
   	printf("\nQuantity of Item#%d: ",qt);
   }
   else{
   	printf("\nQuantity of Items#%d: ",qt);
   }
   scanf("%d",&qp);
   printf("Price: ");
   scanf("%d",&ppi);
   st=qp*ppi;
   printf("Subtotal: %d\n",st);
   gt+=st;
  }
  printf("\nGrand total: %d\n",gt);
  printf("Amount paid: ");
  scanf("%d",&amt_p);
  change=amt_p-gt;
  printf("Change: %d\n",change);
  
  //ASKING FOR ANOTHER CLIENT[S] PURCHASED 
  printf("\n\nOrder again[Y/N]: ");
  scanf("%s",&rspn);	
      
  }while(rspn=='y');
  getch();
  return 0;
}
