#include "FIBI.H" 
int fibonacci(int n)

/*  fibonacci: iterative version

 
Pre:   The parameter n is a nonnegative integer.
Post: The function returns the nth Fibonacci number.
 */

{
   int last_but_one;   //  second previous Fibonacci number, F_i-2
   int last_value;     //  previous Fibonacci number, F_i-1
   int current;         //  current Fibonacci number F_i

   if (n <= 0) return 0;
   else if (n == 1) return 1;
   else {
      last_but_one = 0;
      last_value = 1;

      for (int i = 2; i <= n; i++) {
         current = last_but_one + last_value;
         last_but_one = last_value;
         last_value = current;
      }
      return current;
   }
}
