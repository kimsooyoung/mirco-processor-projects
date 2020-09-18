

## 1. Hello World by assembly language

```
nasm -f elf64 -o helloworld.o helloworld.s
ld -o helloworld helloworld.o
ls
```

## 2. 
```
gcc -S -fno-stack-protector -mpreferred-stack-boundary=4 -z execstack -o sum.a sum.c
gcc -S -fno-stack-protector -mpreferred-stack-boundary=4 -z execstack -o sum.s sum.c

gcc -S -fno-stack-protector -mpreferred-stack-boundary=4 -z execstack -o class.s class.c
gcc -S -fno-stack-protector -mpreferred-stack-boundary=4 -z execstack -o class_2.s class_2.c

```