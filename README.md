# [Prime Numbers](https://github.com/BhargavSai-Lingampalli/prime-numbers/)
##### ***What are Prime Numbers?***
* *A Prime Number is a natural number greater than 1 that is not a product of two smaller natural numbers*
##### ***About this Repository***
* *A Simple C Program to make a list of prime numbers*
## How the Code Works
### Variable Names and Purpose
1. **range** = The Range of Prime Numbers
2. **num** = The present Number
3. **i** = a variable to do modules division in *for loop*
4. **res** = Result
  - if res is 0 it is prime
* if res becomes 1 it is not a prime number
5. **count** = Number of Prime Numbers printed
6. **ofnum** = Half of num


#### Starting
 First we print '2' using printf  since we know that it is a prime number 
`printf("2\t");`

#### Elimination of Even Numbers
* `for  loop` starts with initial value 3 and increment 2.

`for(num=3; num<range; num+=2)`
#### After Eliminating Even Numbers
* Hence we only remain with odd numbers. 
* That Numbers are no more divible by even numbers. 
* So we only have to check the odd numbers by dividing them with odd numbers in the `inner for loop`
* from 3 to num/2(ofnum)
*But why num/2?
* For Example 
The factors of 360 are 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, 18, 20,
 24, 30, 36, 40, 45, 60, 72, 90, 120, 180, 360.
* Let's remove 1 and 360.then we only remains with values 2 to 180(360/2)
* So from this we can understand if any number has factors(dividers) they only lies upto Half of that number.
* So create a variable and store number/2
```ofnum=num/2;```

```
for(i=3,res=0; i<ofnum && res==0; i+=2)
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
- after printing each prime number the `count` is increased by 1

***Thanks for watching.***
## License

[![MIT License](https://img.shields.io/badge/Licence%20-MIT-brightgreen)](https://github.com/BhargavSai-Lingampalli/prime-numbers/blob/main/LICENCE)



