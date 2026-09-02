# Quant C++ Demo Project

## I. Single-File Program

### 1. Compile single-file program `main.cpp` and run it:

```
g++ main.cpp -o app
./app
```

In order to explicitly specify the C++ standard to use flag `std` is needed:

```
g++ -std=c++20 main.app -o app
```

### 2. Only execute preprocessor inclusions
Run:
```
g++ -E main.cpp -o main.i
```
i.e. the flag `-E` has to be used.

### 3. Compile to assembly

In order to comply the mini program in `main.cpp` to assembly only use the `-S` flag:
```
g++ -S main.cpp -o main.s
```

The contents of `main.s` consist of assembler instruction - not pure machine-level code yet, still somewhat human-readable.

### 4. Compile to object file without linking
The command is:
```
g++ -c main.cpp -o main.o
```
Object files - e.g. the `main.o` file - contain machine code. Step lower than assembly - cf. the previous point.


### 5. Linking the object file
So as to link the object file `main.o` created in the previous point, run:
```
g++ main.o -o app
```
and then run the `app`:
```
./app
```

## II. Multiple-Files Program

This program consists of two files:
* `program.cpp`
* `math_utils.cpp`

The compilation to object files is done using the commands:
```
g++ -c program.cpp -o program.o
g++ -c math_utils.cpp -o math_utils.o 
```

and the program is linked using:
```
g++ program.o math_utils.o -o app_program
```