# [Prime Numbers](https://github.com/BhargavSai-Lingampalli/prime-numbers/)
##### ***What are Prime Numbers?***
* *A Prime Number is a natural number greater than 1 that is not a product of two smaller natural numbers*
##### ***About this Repository***
* *A Simple C Program to make a list of prime numbers*
## How the Code Works
### Variable Names and Purpose
1. **range** = The Range of Prime Numbers
2. **num** = Numbers upto Range
3. **i** = Numbers upto  num
4. **res** = Result(0 or 1)
5. **count** = Number of Prime Numbers upto Range
6. **sqnum** = √number + 1


#### Starting
 First we print '2' using printf  since we know that it is a prime number 
`printf("2\t");`

#### Outer for loop
* So `for  loop` starts with initial value 3 and increment by 2.

`for(num=3; num<range; num+=2)`
#### inner for loop
* Since we only remain with odd numbers. 
* That Numbers are no more divible by even numbers(2,4,6,etc.). 
* So we only have to check the odd numbers by doing modulus division with odd numbers from 3 to √num(sqnum)
* But why √num?
* ok for Example 
The divisors of 360 are 1,2, 3, 4, 5, 6, 8, 9, 10, 12, 15, 18, 20,
 24, 30, 36, 40, 45, 60, 72, 90, 120, 180,360.
* Except 360.all the values lies between 1 to 180(360/2)
* from this example we can understand if any number has factors(divisors) they only lies between 1 to number/2(largest factor).
* And the factor with least value always comes before √number(square root of that number)
* So we created a variable and stored √number+1(add 1 for condition check <sqnum)
```sqnum=pow(num,0.5)+1;```

```
for(i=3,res=0; i<sqnum && res==0; i+=2)
   {
      if(num%i==0)
        res=1;
   }

```

* If any odd number divible by a odd number less than it.
* The value of variable res(result) changes to 1. 
    `res=1;`
- otherwise it remains at 0.`res=0`
#### if condition
- If the value of `res` at remains zero after exiting `inner for loop`
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



