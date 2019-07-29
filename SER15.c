   #include <stdio.h>

   #include <math.h>

   int main() {
     int n, i, x, root, val, flag = 0;

     scanf("%d", & n);

     for (i = 1; i <= 100000; i++) {
       
       val = (i * (i + 1)) / 2;
       
       if (val > n / 2)
         break;
       
       x = (n - val) * 2;
       root = sqrt(x);
       
       if (x == (root * (root + 1))) {
         flag = 1;
         break;
       }
     }
     //author Anas Khan
     if (flag == 1)
       printf("YES");
     
     else
       printf("NO");
     
     return 0;
   }