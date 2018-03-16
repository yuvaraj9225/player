
#include<stdio.h>
int main ()
{
  int b[10],i,n;
  printf ("enter the size :");
  scanf ("%d", &n);
  printf ("enter the array value:");
  for (i=0;i<n;i++)
    {
      scanf ("%d", &b[i]);
    }
  for (i=0;i<n;i++)
  {
    printf ("\n%d\t%d\n", b[i], i);
  }
}
