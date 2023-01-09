# Bitwise Operators

 ## Explination:
 
 - Find the max value get from the range of numbers given by the user for the bit wise operator and  or xor.
 
 ## Algorithm:
 
 - Create a 3 variable and, or, xor intiate by 0
 - Make a for loop start with index = 1 untill the loop reach to n
   - Make another for loop start with j=index+1 because a&b = b&a to reduce time complexity 
     - Check index & j if greater than the variable intiate change the value to new one
     - Check index | j if greater than the variable intiate change the value to new one
     - Check index ^ j if greater than the variable intiate change the value to new one
 - Dont forget to print the answer

 
