## This repository holds the source code and  test cases for "wunzip" program
---
> **Description**
---
`wunzip` :  
This program extracts and tests compressed files in a ZIP archive and it is considered that the reverse of `wzip` command. It takes a compressed file and decompresses it and prints the output to the standard output "**Screen**" `std`.
---
**Such as** :
If we want to compress file containing `3v4a6x` 
The unzip should turn it into `vvvaaaaxxxxxx` 

---
> **Useage**
---

- We compile the code file as follows :
``` bash
prompt> gcc -o wunzip wunzip.c -Wall 
```
- Then we will have a binary file for  `wunzip`
- After that will run tests but  firstly have to give a running permission for the bash script `test-wzip.sh`
```bash
prompt> chmod u+x ./test-wunzip.sh
prompt> ./test-wunzip.sh
```

#### The output will :
```bash
test 1: passed
test 2: passed
test 3: passed
test 4: passed
test 5: passed
test 6: passed
```

- The wzip expression take this following form:
```
./wunzip [FILES_NAME] 
```

#### This screenshot shows all the steps that we used :

![GitHub Light](https://github.com/Ola-Mohamed/Ostep_Projects/blob/main/wunzip/wunzip%20test.png)


