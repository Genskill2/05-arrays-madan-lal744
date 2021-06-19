/* Enter your solutions in this file */
#include <stdio.h>
float average(int A[], int n)
{
  int sum = 0;
  for (int i = 0;i<n;i++)
  {
    sum = sum + A[i];
  }
  return (float) sum / n;
}

int factors(int n, int ret[])
{
  int t = 0;
  for(int i =2; i<=n;i++)
  {
    while(n%i == 0)
    {
      ret[t] = i;
      t++;
      n = n/i;
    }
  }
  return t;
}

int max(int a[],int n)
{
  int max = a[0];
  for(int i=1;i<n;i++)
  {
    if(a[i] > max)
      max = a[i];
  }
  return max;
}

int min (int a[] , int n)
{
  int min = a[0];
  for(int i =1; i<n;i++)
  {
    if(a[i] < min)
      min = a[i];
  }
  return min;
}

int mode(int a[], int n)
{
  int t =1;
  int z = a[0];
  for(int i = 0; i<n-1;i++)
  {
    int count = 1;
    for(int j = i+1; j<n;j++)
    {
      if( a[i] == a[j])
        count++;
    }
    if( count > t)
    {
      t = count;
      z = a[i];
    }
  }
  return z;
}
