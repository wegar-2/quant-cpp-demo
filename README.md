# Quant C++ Demo Project

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