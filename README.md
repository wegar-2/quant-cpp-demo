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

### 3. 