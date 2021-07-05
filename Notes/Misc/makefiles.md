# Writing [Makefiles](https://makefiletutorial.com/)

```mermaid
graph TD
    subgraph "Compilation Process";
    step1(source file) -- Preprocessor --> step2[processed file with comments removed and includes pasted];
    step2 -- Compiler --> step3[translated to assembly with .S file extension];
    step3 -- Assembler --> step4[translated to object file with .o file extension];
    step4 -- Linker --> step5(creates executable file from all object files);
end
```

## g++ options

1. `-E` to run just the preprocessor
2. `-S` to run compiler and generate assembly files
3. `-c` to generate object files

## makefile syntax

```makefile
# This is a comment

# basic recipe template
target: dependencies
    actions

# variables
name = value

# accessing variable
name1 = $(name)
name2 = ${name}
```

```makefile

# Targets

all: one two three

one:
    echo 1
two:
    echo 2
three:
    echo 3

# multiple targets

all: f1.o f2.o

# $@ is the automatic variable which contains the target name
f1.o f2.o:
    echo $@

# Equivalent to
# f1.o:
#     echo $@
# f2.o:
#     echo $@



```
