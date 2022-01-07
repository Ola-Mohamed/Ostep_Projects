## This repository holds the source code and  test cases for "wzip" program
>____________________________________________________________________________________
> **Description**
---
`wzip` :  
This program is form of lossless data compression in which runs of data are stored as a single data value and count, rather than as the original run This is most efficient on data that contains many such runs, for example, simple graphic images such as icons and line drawings For files that do not have many runs, RLE could increase the file size.
 
 
---
> **Useage**
---

- We compile the code file as follows :
``` bash
gcc -o wzip wzip.c -Wall -Werror 
```
- Then we will have a binary file for  `wzip`
- After that will run tests but  firstly have to give a running permission for the bash script `test-wzip.sh`
```bash
prompt> chmod u+x ./test-wzip.sh
prompt> ./test-wzip.sh
```

#### The output will :
```bash
test 1: passed
test 2: passed
test 3: passed
test 4: passed
test 5: passed
test 6: passed
test 7: passed
```

- The wzip expression take this following form:
```
./wzip [FILES_NAME] 
```

![GitHub Light](https://github.com/Ola-Mohamed/Ostep_Projects/blob/main/wzip/wzip%20test.png)

