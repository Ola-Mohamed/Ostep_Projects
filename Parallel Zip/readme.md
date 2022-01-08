## Parallel Zip Program
This repository created by our team has the source code and test file with some cases to test the `pzip.c` file which is same as the previous 
program `wzip.c` but this time using multi-processors and threads.  

>Objectives

This program uses multiple threads efficiently which will return to the performance of the program in terms of time ( better performance compared to the sequential zipping `wzip.c`).

|    `wzip.c`       |    `pzip.c`         |
| -------------     | -------------       |
|  Efficient        | Efficient           |
| Less Performance  | Better Performance  |
| Single Processor  | Multi-Processors    |

### We used some learned concepts here like:
- Multi-threading
- Locks
- Conditional variables
- Others
-----------------------------------------------------------------------------------------------------------
- The main concept we consider here is also like we used before..
As you saw it's RLE (run-length encoding) compression routine which is a basic form of data compression that converts consecutive identical values into a code consisting 
of the character and the number marking the length of the run. The more similar values there are, the more values can be compressed


## Example 
>same as `wzip.c`

 consider you have a file with the following input: 
```
aaaaabbbbbcccccaaaaa
```
the output will be as the following: 
```
5a5b5c5a
```
So as you have seen before and I know I repeated this word a lot but stay with me, you know as we said above they are so identical but here in parallel zipping we have a better performance.
 you can see that the difference between this and previous program is taking the advantage of multi-threading that makes a single processor faster and improve CPU performance. 


-------------------------------------------------------------------------------------------------------------

> Implementation

first we need to know how many processors we have so that we could know the number of threads CPU can handle not to have performance problems.
So we used `get_nprocs()` function that returns the number of available processors, then we consider using one thread for the producer and a number of concumers threads 
equal to the number of available processors all that with:

```
pthread_create( pthread_t*  thread,  constpthread_attr_t* attr,  void*  (*start_routine)(void*),  void* arg);
               //thread               //thread attributes           //function to be passed to    //argument to pass to function
```
Oh I almost forgot... Becareful and remember to initialize all locks and condition variables as needed

### Some libraries we used:
```c
#include <sys/mman.h> //Library for mmap
#include <pthread.h>   //Library for threads
#include <sys/stat.h> //Library for struct stat
#include <assert.h> // to use assert() used for wrapping and optimizing the code
```


> Compilation on terminal

```bash
prompet>> gcc         -Wall               -Werror                 -pthread          -o              pzip             pzip.c
         //compiler   // write a message  //Make all warnings     //for threads     //place         //output file    //c file
                        to all users.       into errors.                             output file                     that has the code
```

- Now we have to know if we are right or wrong in solving this problem

## so here we come to testing phase:

### Here we have some test cases to reassure of our code is working right or not
using the bash script `test-pzip.sh` and by performing this command....

```
./test-pzip.sh
```
And if we are okay and don't freak out we are okay.... this will be the output:

```bash
test 1: passed
test 2: passed
test 3: passed
test 4: passed
test 5: passed
test 6: passed
```

Finally, to have your compressed file use this command:

```
./pzip to_be_compressed.txt > compressed.z
```
And this is a comparison between wzip & pzip in performance after testing using this command:
```
time ./test-pzip.sh
```

the output will be:

![WhatsApp Image 2022-01-08 at 06 24 46](https://user-images.githubusercontent.com/61296209/148634315-8d631628-7443-4994-8589-a49631d51dc6.jpeg)


