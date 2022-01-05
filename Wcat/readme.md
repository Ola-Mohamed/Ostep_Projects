
## This repository holds the source code and  test cases for "wcat" program

>____________________________________________________________________________________
 
> Description


 `wcat`  this program is designed to be a recreation of the cat command on the Linux terminal and will serve to print the contents of a file to the terminal screen for each consecutive
 

>____________________________________________________________________________________
 >Useage


 we compile the code file as follows:
```
prompt> gcc -o wcat wcat.c -Wall 
```
then we will have a binary file for  `wcat`
after that will run tests but  firstly have to give a running permission for the bash script `test-wcat.sh`
```
prompt> chmod u+x ./test-wcat.sh
prompt> ./test-wcat.sh
```

The Output

![GitHub Light](https://github.com/Ola-Mohamed/Ostep_Projects/blob/main/Wcat/Screenshot%202022-01-05%20143954.png)

The wcat expression take this following form:
```
./ wcat [FILE_NAMES]
```
>____________________________________________________________________________________
Displaying File Contents

The most basic and common usage of the wcat command is to read the contents of files.

For example, the following command will display the contents of the testfile.txt file on the terminal:
```
./wcat testfile.txt
```
>____________________________________________________________________________________
