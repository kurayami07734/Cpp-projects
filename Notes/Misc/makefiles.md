# Writing Makefiles

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

target: dependencies #basic recipe template
    actions

```
