# Problem04
Following is a high school mathematical problem that was presented in March 2016 by the Ministry of Education.

27. Find the number of natural numbers N that satisfy the following condition

-----------------------------------------------------------
A) N is an odd number of 10 or more and 9999 or less.	   
B) The sum of each digit of N is 7. 
-----------------------------------------------------------


For example, in the case of 331, since the sum of the digits is 7 and the number is odd, the above condition is satisfied. 
Fill in the blanks to complete a C ++ program that can solve the following math problems

+ if a user enters non-numeric letters do not calculate coutings.
+ if you enter the target number, you can output the number of natural numbers from 10 to the target number that is odd and the sum of the digits is 7.

```
#include <iostream>
#include <ctype.h>
#include <stdlib.h>
 
int main(int argc, char** argv)
{
		int target_num;
		std::cin >> target_num;
		int count = 0;
		
		for(/* blank */)
		{
			int sum = 0;
			/* blank */
			
			for (/* blank */) 
			{
    			/* blank */
			}
			
			if(sum==7) count++;
		}
		std::cout << count << std::endl;
	
	return 0;
}

```

You may refer the output result of the program using output program.
You may execute the 
```
~/workspace/midterm/Problem04 (master) $./output
```
