/*You are tasked with writing a program to perform a specific type of analysis on a sequence of integers.
For each integer in a given list, you must first find the smallest prime number that is strictly greater than that integer.
After finding the corresponding "next prime" for every number in the list, your program must calculate and output the sum of all these found prime numbers.

Input Format: The first line contains a single integer N, representing the number of integers in the list. The second line contains N space-separated integers.

Output Format: A single integer representing the total sum of the "next prime" numbers found.*/

#include<stdio.h>
#include<math.h>

int isPrime(int n)
 {
    int d;
    for(d=2;d<=sqrt(n);d++)
    {
        if(n%d==0) return 1;
    }
    return 0;
 }

int main()
{
    int x,i,m,sum=0;

    printf("\nEnter a number: ");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        printf("\nEnter number %d: ",i);
      scanf("%d",&m);
      m++;
      while(isPrime(m))
      {
        m++;
      }
      sum=sum+m;      

    }
    
    printf("%d",sum);

    return 0;
}

/*LAB 04 MONDAY Q4*/

#include<stdio.h>
int main()
{
   char str[255];
   int i;
   printf("\nEnter a string: ");
   gets(str);

   for(i=0;str[i]!=0;i++)
   {
    switch(str[i])
    {
      case'a' : 
      case'A' : 
      case'e' : 
      case'E' : 
      case'i' : 
      case'I' : 
      case'o' : 
      case'O' : 
      case'u' : 
      case'U' : 
                  break;

      case'#' :  i++;
                 if(str[i]>='a'&&str[i]<='z') 
                 {
                    str[i]=str[i]-32;
                    printf("%c",str[i]);              
                 }
                 else
                 {
                    printf("%c",str[i+1]);
                 }
            break;

      case'*' : i++;
                printf("%c",str[i]);
                printf("%c",str[i]);
                break;

      case';' : str[i+1]=0;
                break;

      case'0': 
      case'1': 
      case'2': 
      case'3': 
      case'4': 
      case'5':
      case'6':
      case'7':
      case'8':
      case'9': printf("DIGIT");
               break;

      default: printf("%c",str[i]); 

    }
   }

    return 0;
}

/*You are asked to print a zig-zag number pattern for a given integer N.
   Each row must contain exactly N numbers.
Odd rows are printed left to right.
Even rows are printed right to left.*/

#include<stdio.h>
int main()
{
    int n,c,i,a=1;

    printf("\nEnter the number of rows to print: ");
    scanf("%d",&n);

    printf("\n");
    
    for(i=1;i<=n;i++)
    {
        for(c=1;c<=n;c++)
        {
            printf("\t%d",a);
            a++;
        }
        printf("\n");
        i++;
        a=a+n-1;
        if(i<=n)
        {
          for(c=1;c<=n;c++)
          {
            printf("\t%d",a);
            a--;
          }
          printf("\n");
          a=a+n+1;
        }
        else
        break;
    }
}

// LAB EXAM MONDAY Q1

#include<stdio.h>

int main()
{
  int arr[5],i,m,tmp=0,n=0,t;
   printf("\nEnter 5 numbers: ");
   
    for(i=0;i<5;i++)
    {
      scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++)
    {
      m=arr[i];
      t=0;
      if(m==0) t=1;
      while(m>0)
      {
        if((m&1)==0) t++;
        m=m>>1;
      }
      
      if(t>tmp)
      {
        tmp=t;
        n=arr[i];
      }
    }
 
    printf("%d",n);

  return 0;
}

//LAB EXAM MONDAY Q3
#include<stdio.h>

int main()
{
  char str[500];
  int i,j,n;

  printf("\nEnter a string: ");
  gets(str);
  
  for(i=0;str[i]!=0;i++);
  j=i-1;
  i=0;
  
  while(j>=i)
  {
    if(str[i]==str[j])
    { 
      i++;
     j--;
    }
    else
    {
      n=0;
      break;
     }
  }

  if(n!=0) printf("\nSymmetric");
  if(n==0) printf("\nAsymmetric");

   return 0;
}

//MONDAY LAB EXAM Q2
#include<stdio.h>
int main()
{
  int n,m,i,j,t;
  printf("\nEnter the number of rows:");
  scanf("%d",&n);
  printf("\nEnter the number of columns:");
  scanf("%d",&m);

  int arr[n][m];
  
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    scanf("%d",&arr[i][j]);
  }

  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      arr[i][j]=0;

      if(j==m-1)
      {
        arr[i][j]=0;
        break;
      }

      for(t=1;t<m-j;t++)
      {
        arr[i][j]=arr[i][j]+arr[i][j+t];
      }
      
    }
  }
  printf("\n");

   for(i=0;i<n;i++)
   {
    for(j=0;j<m;j++)
    {
      printf("%d\t",arr[i][j]);
    }
    printf("\n");
   }

  return 0;
}

//TUE LAB EXAM Q1
#include<stdio.h>
int main()
{
	int i,n,x,sum=0,count=0;
	printf("\nEnter number of elements in array: ");
	scanf("%d",&n);

	int arr[n];
	 printf("\nEnter the elements of the array: ");
	 for(i=0;i<n;i++)
	 {
		scanf("%d",&arr[i]);
	 }

	printf("\nEnter the number X: ");
	scanf("%d",&x);

    for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}

	for(i=0;i<n;i++)
	{
		if(x+arr[i]>sum-arr[i])
		count++;
	}

	printf("%d",count);


	return 0;
}

//TUE LAB EXAM Q2
#include<stdio.h>
int main()
{
	int n,m,i,j,sum=0,k,l;
	printf("\nEnter the number of rows to print: ");
	scanf("%d",&n);
	printf("\nEnter the number of columns to print: ");
	scanf("%d",&m);

    int arr[n][m];

	printf("\nEnter the row elemetns: ");

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	k=n/2 ;
	l=m/2 ;

	for(i=0;i<n;i++)
	{
		sum = sum + arr[i][l];
	}

	for(j=0;j<m;j++)
	{
		sum = sum + arr[k][j];
	}

	sum = sum - arr[k][l];
     printf("%d", sum);

	return 0;
}

//TUE LAB EXAM Q3
#include<stdio.h>
#include<string.h>
int main()
{
   char str1[100], str2[100];

   printf("\nEnter string 1: ");
   gets(str1);
   printf("\nEnter string 2: ");
   gets(str2);

   int count[26]={0};
   int i;

   if(strlen(str1)!=strlen(str2))
   {
	printf("NO");
	return 0;
   }

for(i=0;str1[i]!='\0';i++)
{
	count[str1[i]-'a']++;
	count[str2[i]-'a']--;
}

for(i=0;i<26;i++)
{
	if(count[i]!=0) 
	{   
		printf("\nNo");
	    return 0;
	}
}
    printf("\nYes");

	return 0;
}

//WED LE Q3
#include<stdio.h>
int main()
{
    int i,a=1,d=1;
    char str[100];

    printf("\nEnter a string: ");
    gets(str);

    for(i=0;str[i+1]!=0;i++)
    {
        if(str[i]>=str[i+1]) a=0;
        if(str[i+1]>=str[i])d=0;
    }

    if(a)
    {
        printf("\nStrictly Ascending");
    }
    else {
        if(d) printf("\nStrictly Descending");
        else printf("\nParadoxical");
    }

    return 0;
}

//WED LE Q2
#include<stdio.h>
int main()
{
    int n,m,sum=0,i,j;
    printf("\nEnter the number of rows to print: ");
    scanf("%d",&n);
    printf("\nEnter the number of columns to print: ");
    scanf("%d",&m);

    int arr[n][m];

    printf("\nEnter the elements: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(j=0;j<m;j++)
    {
        sum=sum+arr[0][j];
        sum=sum+arr[n-1][j];
    }

    for(i=0;i<n;i++)
    {
        sum=sum+arr[i][m/2];
    }

    sum=sum-arr[0][m/2]-arr[n-1][m/2];

    printf("%d",sum);

    return 0;
}

//WED LE Q1
#include<stdio.h>
#include<math.h>

int isPrime(int n)
{
   int d;
   for(d=2;d<=sqrt(n);d++)
   {
    if(n%d==0) return 0;
   }
   return 1;
}

int main()
{
    int n,i,arr[100],a=0,d,j,m;
    printf("\nEnter a number: ");
    scanf("%d",&n);

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            if(isPrime(i))
            {
              arr[a]=i;
              a++;
            }
        }
    }
   
    for(j=0;j<a;j++)
    {
        printf("%d*",arr[j]);
    }   
    printf("\b ");

    return 0;
}

//Matrix Mulitplication
#include<stdio.h>
int main()
{
    int n,m,i,j,k=0;
    printf("\nEnter number of rows to print: ");
    scanf("%d",&n);
    printf("\nEnter the number of columns to print: ");
    scanf("%d",&m);

    int arr[n][m];
    printf("\nEnter the elements: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",arr[n][m]);
        }
    }

    for(j=k;j<n-1;j++)
    {
        printf("%d",arr[k][j]);
    }
    for(i=k;i<m-1;i++)
    {
        printf("%d",arr[k][n-1]);
    }
    

    return 0;
}

//Rotating a matrix by 90 degrees
#include<stdio.h>
int main()
{
    int n,i,j,k=0;

    printf("\nEnter the number of rows and columns: ");
    scanf("%d",&n);

    int arr[n][n];

    printf("\nEnter the elements: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int arr1[n][n];
    for(j=0;j<n;j++)
    {
        for(i=n-1;i>=0;i--)
        {
            arr1[j][n-1-i]=arr[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//Dominant indice
#include<stdio.h>
int main()
{
    int n,i,j,count=0,sum;
    printf("\nEnter the number of elements to print: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        sum=0;
        if(i!=n-1)
        {
         for(j=1+i;j<n;j++)
         {
            sum=sum+arr[j];
         }
         sum=sum/(n-i-1);
        }
        else break;
      if(arr[i]>sum) count++;
    }

    printf("%d",count);

    return 0;
}
//Max Profit
#include<stdio.h>
int main()
{
    int n,i,low,profit=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(low>arr[i]) low=arr[i];
       else if (arr[i]-low>profit) profit=arr[i]-low;        
    }
    printf("%d",profit);

    return 0;
}

//Paranthesis question lab 07 monday
#include<stdio.h>
int count=0;

void generate(int open, int close, int n)
{
    if(open==n&&close==n)
    {
        count++;
        return;
    }
    if(open<n)
     generate(open+1,close,n);
    if(close<open)
     generate(open,close+1,n);
}


int main()
{
    int n;
    scanf("%d",&n);

    generate(0, 0, n);

    printf("%d", count);

    return 0;
}

//Dice sum Problem
#include<stdio.h>

int count=0;

int generate(int n)
{
    if(n<0)
     return 0;
    if(n==0)
     return 1;

     return generate(n-1)+generate(n-2)+generate(n-3)+generate(n-4)+generate(n-5)+generate(n-6);
}

int main()
{
    int x;
    int n;
    scanf("%d",&n);

    x=generate(n);

    printf("%d",x);
    return 0;
}

//encryption using pointers and recursion
#include<stdio.h>
void Encrypt(char*s)
{
    if(*(s)=='\0') return;    
    if(*(s)=='z') 
    *(s)='a';
    else *(s)=*(s)+1;
    printf("%c",*s);
    Encrypt((s)+1);
      
}

int main()
{
    char s[100];
    int i;
    scanf("%s",&s);
    Encrypt(s);
       
    return 0;
}

// lab 11 monday q1
#include<stdio.h>
int main()
{
    int n,x=0,i=0,p=0;
    scanf("%d",&n);
    if(n==0) x=0;
    int arr[100];    
    int m=n;
    while(m)
    {
        if(m%10!=0) 
        {
        arr[i]=m%10;       
        i++;
        }
         m/=10;
    }
    i--;
    for(int j=i;j>=0;j--)
    {
        x=x+arr[j];
        p=p*10+arr[j];        
    }
    printf("%d",p*x);
    return 0;

}
//lab 10 monday Q1
#include<stdio.h>
#include<stdlib.h>

void swap(int A[],int n)
{
    int min=A[0],max=A[0],l,h,tmp;
    for(int i=1;i<n;i++)
    {
      if(A[i]>max) 
      {
        max=A[i];
        h=i;
      }
      if(min>A[i])
       {
        min=A[i];
        l=i;
       }
    }
    tmp=A[l];
    A[l]=A[h];
    A[h]=tmp;
}

int main()
{
    int n;
    scanf("%d",&n);
    int*A=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",(A+i));
    }
    swap(A,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(A+i));
    }
    return 0;
}
//lab 10 monday Q2
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int*A=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",(A+i));
    }
    int *p1=A;
    int j=0;
    
    for(int i=0;i<n;i++)
    {
        int*p2=&A[j];
        if(A[i]!=0)
        {
            int tmp=*p1;
            *p1=*p2;
            *p2=tmp;
            j++; 
        }
        p1++;    
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(A+i));
    }
    free(A);
    return 0;

}

//monday lab 10 Q4

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
    int s=0;
    for(int i=1;i<argc;i++)
    {
      s+=atoi(argv[i]);
    }
    printf("%d",s);
    return 0;
}
//lab 10 tue Q1
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,count=0,i,m;
    
    scanf("%d",&n);
    int*A=(int*)malloc(n*sizeof(int));
    int*V=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",(A+i));
    }
    while(i>=0&&i<n&&*(V+i)==0)
    {
        *(V+i)=1;
        count++;
         m=*(A+i);
        i+=m;
    }
    printf("%d",m);
    free(V);
    free(A);
    return 0;
}

//lab 11 Wed Q4
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int l,count=0;
    scanf("%s",str);
    l=strlen(str);
    
    for(int i=0;i<l/2;i++)
    {
        if(str[i]==str[l-i-1]);
        count++;
    }
    printf("%d",count);
    return 0;

}

//lab 11 Wed Q3
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,p=1;
    scanf("%d",&n);
    int*A=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",(A+i));
        p=p*(*(A+i));
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",p/(*(A+i)));
    }
    return 0;    
}
//lab 11 wed Q1
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int*A=(int*)malloc(n*m*sizeof(int));
    int*B=(int*)malloc(n*m*sizeof(int));

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        scanf("%d",(A+i*m+j));
        *(B+i*m+j)=*(A+i*m+j);
    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
       if(*(A+i*m+j)==0)
       {
        for(int p=0;p<n;p++)
        {
            *(B+p*m+j)=0;
        }
        for(int p=0;p<m;p++)
        {
            *(B+i*m+p)=0;
        }
       }
    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        printf("%d ",*(B+i*m+j));
    }
    printf("\n");
}    
    free(A);
    free(B);
    return 0;
    
}