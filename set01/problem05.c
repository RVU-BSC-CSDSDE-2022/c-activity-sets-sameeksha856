 #include <stdio.h>
 int input();
intcompare(int a,int b, int c);
void output(int a, int b,int c,int largest);

 int main()
{
 int a,b,c,largest;
 a=input();
 b=input();
 c=input();
 largest=compare(a,b,c,largest);
 output(a,b,c,largest);
}

int input()
{
 int n;
 scanf("%d",&n);
 return n;
}

int compare(int a,int b,int c)
{
 int max;
 max=NULL;
 if((a>b)&&(b>=c))
{
  max=a;
} 
else if((b>=a)&&(b>=c))
{
  max=b;
}
else
{
   max=c;
}
return max;
} 

void output(int a,int b,int c,int largest)
{
  printf("The largest of%d,%d and %d is %d",a,b,c,largest);
}

  

  
