#include <stdio.h>

struct _complex 
{
	float real,img;
};

typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main()
{
 int n;
  Complex result;
  n=get_n();
  int a[n];
  // result=0; 
  input_n_complex(n,a);
  result=add_n_complex(n,a);
  output(n,a,result);
  return 0;
}
int get_n()
{
  int n;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  //return n;
}
Complex input_complex()
{
  Complex a;
  printf("Enter the real n imaginary part in complex number.\n");
  scanf("%d %d", &a.real, &a.img);
  return a;
}
void input_n_complex(int n, Complex c[n])
{
  int i;
  for(i=0;i<n;i++)
  {
   input_complex();
  }
}
Complex add(Complex a, Complex b)
{
  Complex result;
  result.real = a.real+b.real;
  result.img = a.img+b.img;
  return(result);
}
Complex add_n_complex(int n, Complex c[n])
{

int i;
for(i=0;i<n;i++)
  {
    (int n,complex c[n]);
  }
}
void output(int n, Complex c[n], Complex result)
{
  int i=0;
  for(i=0;i<n;i++)
    {
      printf("The result of %d+",c[i]);
    }
  printf("is %d",result);
}