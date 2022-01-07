 ## This repository holds the source code and  test cases for "wgrep" program

--- 
> Description
---

 `wgrep` this program is designed to the find the searchterm in the file contents. Similar to the wcat program, it gets the file length and then the contents of the file, using the string.h header file, then uses strstr() to see if the substring exists within the original string, the line
 
---
 >Useage
---

 we compile the code file as follows:
```
prompt> gcc -o wgrep wgrep.c -Wall 
```
then we will have a binary file for  `wgrep`
after that will run tests but  firstly have to give a running permission for the bash script `test-wgrep.sh`
```
prompt> chmod u+x ./test-wgrep.sh
prompt> ./test-wgrep.sh
```

The Output

![GitHub Dark](https://github.com/Ola-Mohamed/Ostep_Projects/blob/main/Intial_Utilities/wgrep/wgerp%20test.png)

The wgrep expression take this following form:
```
./wgrep "Term To Search For" filename
```


---
To Search a File
---

The most basic and common usage of the wgrep command is to search in the contents of files.

---
For example, the following command will print out any line containing "Hello" in the testfile.txt file on the terminal
```
./wgrep "Hello" testfile.txt
```
