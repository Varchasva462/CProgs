//HOLLOW TRIANGLE//
#include<stdio.h>
int main()
{
   int r,c,h;

   printf("\nEnter the number of rows to print: ");
   scanf("%d", &h);
   
   for(r=1;r<h;r++)
   {
    for(c=1;c<=h-r;c++) printf(" ");
    for(c=1;c<=2*r-1;c++)
    {
      if(c==1||c==2*r-1)
      printf("*");
      else
      printf(" ");
    }
    printf("\n");
   }
    if(r==h)
    {
      for(c=1;c<=2*h-1;c++)
      printf("*");
    }
}



// seed wala
#include<stdio.h>
int main()
{
  int r,c,n,j,i;

 printf("\nEnter seed (1-9): ");
 scanf("%d",&n);

  for(r=i=1;r>=1;r=r+i)
  {
    for(c=j=1;c>=1;c=c+j)
    {
        printf("%d",c<r?c:r);
        if(c==n) j=-1;
    }
    printf("\n");
    if(r==n)i=-1;
  }
}

/* 
      A
     BAB
    CBABC
*/

#include<stdio.h>
int main()
{
    int n,r,c,i,x;

    printf("\nEnter the number of rows to print: ");
    scanf("%d",&n);

    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)putchar(' ');
        for(x=r,i=-1;x<=r;x=x+i)
        {
            printf("%c",64+x);
            if(x==1)i=1;
        }
        printf("\n");
    }
}

//Alphabet pyramid
#include<stdio.h>
int main()
{
    int r,c,n,j;

    printf("\nEnter the number of rows to print: ");
    scanf("%d", &n);

    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)putchar(' ');
        for(c=j=1;c>=1;c=c+j)
        {
            printf("%c",64+c);
            if(c==r)j=-1;
        }
        printf("\n");
    }
}

/* 1
   22
   333
   4444*/

#include<stdio.h>
int main()
{
  int n,r,x,c;
  printf("\nEnter the number of rows to print: ");
  scanf("%d",&n);

  for(r=x=1;r<=n;r++,x++)
  {
    for(c=1;c<=r;c++)
    {
      printf("%d",x%10);
      
    }
    printf("\n");
  }
}

//Another alphabet triangle
#include<stdio.h>
int main()
{
    int n,r,c,i,x;

    printf("\nEnter the number of rows to print: ");
    scanf("%d",&n);

    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)putchar(' ');
        for(c=r,i=+1;c>=r;c=c+i)
        {
            printf("%c",64+c);
            if(c==2*r-1)i=-1;
        }
        printf("\n");
    }
}

/* 
1
121
12321
*/

#include<stdio.h>
int main()
{
  int x,r,n;

  printf("\nEnter the number of rows to print: ");
  scanf("%d",&n);
  
  for(r=1,x=10;r<=n;r++,x*10)printf("\n%d", (x/9)*(x/9));
}

//runtime formatting

#include<stdio.h>
int main()
{
  int n,w;
  n=25;
  printf("%5d",n);
}

//input alphabet 
#include<stdio.h>
#include"ASS1.h"
int main()
{
    char n;
    
    printf("\nEnter an alphabet: ");
    scanf("%c",&n);
   
    if(isAlpha(n))
    {
        n=toUpper(n);
        if(n=='A'||n=='E'||n=='I'||n=='O'||n=='U') printf("\nThe alphabet is a vowel!");
        else
        printf("\nThe alphabet is a consonant!");        
    }
    else
    printf("The input is not an alphabet!");
}

//Determination of alphabet,digit,special symbol
#include<stdio.h>
#include"ASS1.h"
int main()
{
    char x,m;

    do
    {

      printf("\nEnter your character: ");
      scanf(" %c",&x);                                     // space before %c makes scanf consume all the spaces
      
    if(isAlpha(x))
      {
        if(x>='a'&&x<='z')printf("\nThe character is a lowercase Alphabet!");
        else
        printf("\nThe character is an uppercase alphabet!");
      }
     else
       {        
         if(isDigit(x))
         {
           printf("\nThe character is a digit!");
         }
         else 
         {
           printf("\nThe character is a special symbol!");
         }
       }
       fflush;
       printf("\nDo you want to continue?(Y/N): ");
       scanf(" %c",&m);                                                 //space before %c
    }
    while(m=='Y'||m=='y');
}

//ASS1_Q3
#include<stdio.h>
int main()
{
    int n,r,c;
    char x;

    printf("\nEnter the number of rows to print: ");
    scanf(" %d",&n);
     
    printf("\nEnter the symbol you want to print: ");
    scanf(" %c",&x);

    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)  printf("%c",x);
         printf("\n");
    }
   
}

//cleaner number pyramid
#include<stdio.h>
int main()
{
    int n,r,c,j;

    printf("\nEnter the number of rows to print: ");
    scanf("%d", &n);

    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)printf("  ");    /* for one space after the digit, for proper alignment, 2 gaps 
                                                  be left here as well*/
        for(c=j=1;c>=1;c=c+j)
        {
          printf("%2d",c);
          if(c==r)j=-1;
        }
        printf("\n");
    }
}

//number pyramid with spaces (clean)
#include<stdio.h>
int main()
{
    int n,r,c,j;

    printf("\nEnter the number of rows to print: ");
    scanf("%d", &n);

    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)printf("  ");   
        for(c=1;c<=r;c++)
        {
          printf("%4d",r);          
        }
        printf("\n");
    }
}

//electricity bill
#include<stdio.h>
int main()
{
  int u,amt;

  printf("\nEnter the total number of units: ");
  scanf("%d",&u);

  if(u>=0||u<=100)
  amt=u*4;
  else
  {
    if(u>100||u<=300)
    amt=400+(u-100)*5;
    else
    {
      if(u>300||u<=600)
      amt=1400+(u-300)*7;
      else
      {
        if(u>600)
        amt=3500+(u-600)*10;
      }
    }
  }
  
  amt=amt+amt*0.02;
  printf("\nYour bill is: %d", amt);

}

//number input
#include<stdio.h>
int main()
{
  int n=0,x;
  char m;
  
  do
  {
    printf("\nEnter digit: ");
    scanf(" %d",&x);
    n=n*10+x;
    printf("\nDo you want to continue?(Y/N)");
    scanf(" %c",&m);
  }
  while(m=='y'||m=='Y');

  printf("\nYour input is: %d",n);  
   
}
//extracting number from head
#include<stdio.h>
int main()
{
  int n,q,r,d,no;

  printf("\nEnter your number: ");
  scanf("%d",&n);

  for(q=n,d=1;q>=10;d*=10,q/=10);
  r=n;
  no=0;
  while(d)
  {
    q=r/d;
    no=no*10+q;
    r=r%d;
    d/=10;       
  }
  printf("\nYour number is :%d",no);

}