#include <stdio.h>
#include<math.h> 
int mystery( int, int );
int main()
{
   int x, y;
   printf("Enter two integers: ");
   scanf("%d%d",&x,&y);
   printf("The result is %d\n",mystery( x, y ));
   return 0;
}
int mystery( int a, int b )
{
   if ( b == 1 )
      return a;
   else if(b > 0)
      return a + mystery( a, b - 1 );
   else if(b < 0)
      return -a - mystery(abs(a),abs(b)-1);
}
