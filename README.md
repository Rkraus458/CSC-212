# CSC-212

### Verify that C Compiler is installed on OSX
```
clang++ --version
```


### Pull the Repo and open Source in VSCode from Terminal Application
```
git clone https://github.com/Rkraus458/CSC-212.git
cd CSC-212
cd maze-scratch
code main.cpp
```

### Compile to executable
```
clang++ main.cpp -o maze-app
```
### Run the app

Parameters are positional
12 is seed generator
5 is number of rows
5 is number of columns
output.txt is file output will be written to

```
./maze-app 12 5 5 output.txt

seed variable: 12
N variable(# of rows): 5
M variable(# of columns): 5
fname variable(Filename): output.txt
   1   2   3   4   5
   6   7   8   9  10
  11  12  13  14  15
  16  17  18  19  20
  21  22  23  24  25
```
