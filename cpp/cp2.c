#include < stdio.h>  

int main()
{
    int i, count = 0;
    int num = 19;
    
    // checking number of divisors b/w 1 & num
    for(i = 1; i <= num; i++) {
      if(num % i == 0) 
        count += 1;
    } 
     // 0 & 1 are not prime number
       if(num == 0 || num == 1)
         printf("%d is not prime", num); 
     //if number of divisors are > 2 then not prime else prime 
       else if(count > 2) 
          printf("%d is not prime", num);
       else
         printf("%d is prime", num);

  return 0;
}
