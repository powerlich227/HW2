#include <stdio.h>
#include <math.h>

#define MAX_ITERATIONS 100

main()
{
  double a; //define accuracy of the solution
  printf("please input the desired accuracy of the solution");
  scanf("%lf",&a);

  double x=0,x1,error;
  int i=0;

  error=(cos(x)-x)/(1+sin(x)); //initial error as x=0
  
  while(error>a && i<=MAX_ITERATIONS)
    {
      x1=x-(x-cos(x))/(1+sin(x)); 
      error=abs(x1-x);
      x=x1;
      i++;
    }
  if(error<=a)
    printf("the solution is %lf\nthe accuracy is %lf\nthe iteration is %d\n",x,error,i)
  else
    printf("sorry, no solution for your accuracy!")
}
