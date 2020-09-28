## x86 Assembly Programming Tutorial

![issue_badge](https://img.shields.io/badge/build-Passing-green)

My first step for x86 assembly progamming 😎

### Dependencies

- gcc compiler
- x86 based 64bit Laptop or something.

---

## 1. Hello World ASAM

build by following commands

```
nasm -f elf64 -o helloworld.o helloworld.s
ld -o helloworld helloworld.o
ls
```

## 2. Echo Program

```
gcc -S -fno-stack-protector -mpreferred-stack-boundary=4 -z execstack -o sum.a sum.c
gcc -S -fno-stack-protector -mpreferred-stack-boundary=4 -z execstack -o sum.s sum.c

gcc -S -fno-stack-protector -mpreferred-stack-boundary=4 -z execstack -o class.s class.c
gcc -S -fno-stack-protector -mpreferred-stack-boundary=4 -z execstack -o class_2.s class_2.c

```

---

### Reference

- [Youtube Tutorial from 동빈나](https://www.youtube.com/watch?v=uOIq-P2eQXs)
