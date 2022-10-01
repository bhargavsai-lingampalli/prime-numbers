# [Prime Numbers](https://github.com/BhargavSai-Lingampalli/prime-numbers/)
##### ***What are Prime Numbers?***
* *A Prime Number is a natural number greater than 1 that is not a product of two smaller natural numbers*
##### ***About this Repository***
* *A Simple C Program to make a list of prime numbers*
## How the Code Works
#### Starting
 First we print the 2 using printf  since we know that it is a prime number 
`printf("2\t");`

#### Elimination of Even Numbers
* `for  loop` starts with initial value 3 and increment 2.

`for(num=3; num<range; num+=2)`
#### After Eliminating Even Numbers
* Hence we only remain with odd numbers. 
* That Numbers are no more divible by even numbers. 
* So we only have to check the odd numbers by dividing them with odd numbers in the `inner for loop`
```
for(i=3,res=0; i<num && res==0; i+=2)
   {
      if(num%i==0)
        res=1;
   }

```
#### After Checking a Number 

 * If any odd number divible by a odd number less than it.
* The value of variable res(result) changes to 1. 
    `res=1;`
- otherwise it remains at 0.`res=0`

- If the value at `res` remains zero after exiting `inner for loop`
- It gets printed in the iteration of `outer for loop`  by using printf.
```
if(res==0)
    {
        printf("%d\t",num);
        count+=1;
     }
```
- To count the number of prime numbers printed the `count` is increased by 1.

***Thanks for watching.***


