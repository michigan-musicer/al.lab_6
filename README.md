English-language slidedeck and code files for lab 6 in AL Basics of Programming class.

# Instructions for class

**READ** the section below on preprocessor directives before proceeding with the project.

You should need to **add all files (.h and .c) to the project** in CodeBlocks; otherwise, you will be unable to correctly run your code. Ask Kevin for help if necessary.

---

Download all files in this repository and upload them to a CodeBlocks project. Write and complete functions in `lab04.c`. 

If you would like to run these files in a Unix environment outside of CodeBlocks, you can run `make lab04` in the command line. This will compile and execute your program for you. You will need to ensure that `make` and `gcc` are both installed in your environment. 

Solution file will be uploaded after class, exact time / date TBD.

# Preprocessor directives

Preprocessor directives tell the computer to do things before the code is compiled. At this level, you don't need to worry about the specifics to this process; the more important thing to know is how to use them to create projects with multiple files.

For more details, read here: [https://learn.microsoft.com/en-us/cpp/preprocessor/preprocessor-directives?view=msvc-170](https://learn.microsoft.com/en-us/cpp/preprocessor/preprocessor-directives?view=msvc-170) 

## What to use for this assignment

### Includes

`#include` will include the code from one file into another. It typically goes at the top of a file above the rest of the code. 

The syntax for an `#include` is different depending on what code you are including. If that code comes from a header file, use quotation marks (`""`); if it comes from a C standard library or some other compiled library, use angle brackets (`<>`). If you're not sure which to use, look up the file to see if it's part of the C standard library.

```c
#include <stdio.h> // C standard library
#include "helper.h" // your header file
```

### Defines

`#define` is used to create a *macro*, which is basically a string and a value that the string represents.

```c
#define LIMIT 10

// buncha code...
int main() {
    printf("%d\n", LIMIT); // this prints 10
}

```

You can also write the string by itself. This is common when using the `#idndef` - `#define` - `#endif` pattern seen below.

For more on `#define` and macros, see [https://learn.microsoft.com/en-us/cpp/preprocessor/hash-define-directive-c-cpp?view=msvc-170](https://learn.microsoft.com/en-us/cpp/preprocessor/hash-define-directive-c-cpp?view=msvc-170).

### Define conditionals

`#ifndef` is used to start a conditional block *if* a specific condition has not been defined by a `#define` macro. 

`#endif` closes the conditional block started by a corresponding `#ifndef`. The conditional block formed will not be included in the compiled code if the condition specified by the `#ifndef` is met.

`#define` can be used to a condition that can be used by an `#ifndef` (or an `#ifdef` which does the opposite of what `#ifndef` does).

Typically, `#ifndef`, `#define`, and `#endif` are all used together to make sure that content in header files is not included multiple times.

```c
#ifndef SOME_CONDITION
#define SOME_CONDITION

// bunch of code here...

#endif // SOME_CONDITION
```

The comment after the `#endif` is not strictly necessary, but is usually written to help other programmers read your code.

There are more advanced use cases that come up when you write bigger, more optimized codebases (think of a game engine that is millions of lines of code large). This is all I will teach for now; the most important thing to learn starting out is just the `#include` so that you can more easily make larger projects.
