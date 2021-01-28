#include <stdio.h>
#include <string.h>
int main()
{
   char a[100], ch;
   int n, i, m = 0, f = 0;
   scanf("%d", &n);

   for (i = 1; i <= n; i++)
   {
      scanf("%s %c", a, &ch);

      if (ch == 'M')
      {
         m++;
      }

      else if (ch == 'F')
      {

         f++;
      }
   }
   printf("%d carrinhos\n", m);
   printf("%d bonecas\n", f);

   return 0;
}
