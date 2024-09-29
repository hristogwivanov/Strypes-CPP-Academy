Preprocessing:

```g++ -E program.cpp -o program.i```
```g++ -E swap.cpp -o swap.i```


Compilation to assembler files:

```g++ -S program.i -o program.s```
```g++ -S swap.i -o swap.s```

Assembling to object files (Machine code): 

```g++ -c program.s -o program.o```
```g++ -c swap.s -o swap.o```

Linking into program: 

```g++ program.o swap.o -o program```