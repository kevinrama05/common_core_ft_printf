*This project has been created as part of
the 42 curriculum by kerama*

# ft_printf

> Because `ft_putnbr()` and `ft_putstr()` aren’t enough.

## Description

The **ft_printf** project is about recreating the behavior of the standard C library function `printf()`.  
Your goal is to build a **custom implementation** that can handle formatted output using **variadic arguments** — a core concept in C programming.

Through this project, you will learn how to:
- Manage a **variable number of parameters** using `<stdarg.h>` macros (`va_start`, `va_arg`, `va_end`).
- Format and print **different data types** such as characters, strings, integers, and pointers.
- Organize your code in a **modular and extensible way** suitable for future projects.

Your function must mimic the real `printf()` while supporting the following conversions:

| Specifier | Description |
|:----------:|:------------|
| `%c` | Prints a single character |
| `%s` | Prints a string |
| `%p` | Prints a pointer address in hexadecimal format |
| `%d` / `%i` | Prints a signed integer (decimal) |
| `%u` | Prints an unsigned integer |
| `%x` | Prints a hexadecimal number (lowercase) |
| `%X` | Prints a hexadecimal number (uppercase) |
| `%%` | Prints a percent sign |

The project produces a **static library** named `libftprintf.a`, which can be linked to other C projects — especially your future 42 assignments.  
Once validated, you may include your `ft_printf()` inside your `libft` for use in subsequent projects.


## Summary

The goal of this project is straightforward: **recode the `printf()` function**.  
You will learn about **variadic functions** and build a **library** that mimics part of the original `printf`.

How cool is that? It is actually *pretty cool*

---

## Introduction

You will discover a popular and versatile C function: `printf()`.  
This exercise is a great opportunity to improve your programming skills — it is of **moderate difficulty**.

You will discover **variadic functions** in C and learn how to handle a **variable number of arguments**.

The key to a successful `ft_printf` is **a well-structured and extensible codebase**.

Once this project is passed, you will be allowed to **add your `ft_printf()` to your `libft`**,  
so you can use it in future C projects at 42.

---

## Common Instructions

- Your project must be written in **C**.
- You must follow the **Norm**.  
  If any file (including bonus) has a Norm error, you will receive a **0**.
- Your functions must not crash unexpectedly (segfault, bus error, double free, etc.).  
  Undefined behavior aside, crashes = 0.
- All **heap-allocated memory** must be freed properly — **no memory leaks**.
- You must submit a **Makefile** with at least the following rules:
  - `$(NAME)`
  - `all`
  - `clean`
  - `fclean`
  - `re`
- The Makefile must:
  - Compile using `cc` with `-Wall -Wextra -Werror`
  - Not relink
- If using `libft`, include its sources and Makefile in a `libft` folder.  
  Your Makefile must compile it before compiling your project.
- Testing programs are encouraged (not graded) — they’re especially useful for defense.
- Only work **pushed to your Git repository** will be graded.
- If Deepthought runs your project and an error occurs, the evaluation will stop.

---

## AI Instructions

### Context

This project is part of 42’s foundational training — it’s designed to **build fundamental coding skills**.  
AI can be a tool, but **true understanding** requires reasoning, practice, and peer collaboration.

### Main Message

> Build strong foundations — no shortcuts.  
> Really develop your **tech and problem-solving skills**.  
> The **learning journey** matters more than the result.

### Rules

- Think and reason before asking AI for help.
- Don’t ask AI for direct answers.
- Learn about 42’s approach to AI.

### Outcomes

- Build solid C and algorithmic foundations.
- Understand **why and how AI can be dangerous** for your learning at this stage.

### Comments and Example

**Good practice**  
> You’re stuck → discuss the concept with a peer → you understand it.

**Bad practice**  
> You secretly use AI, copy code, fail to explain it in peer eval → you fail.

---

## Mandatory Part

| **Program Name** | `libftprintf.a` |
|------------------:|----------------|
| **Files to Submit** | `Makefile`, `*.h`, `*/*.h`, `*.c`, `*/*.c` |
| **Makefile Rules** | `NAME`, `all`, `clean`, `fclean`, `re` |
| **External Functions** | `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end` |
| **Libft Authorized** | Yes |
| **Description** | Write a library that contains `ft_printf()`, a function that mimics the original `printf()` |

### Prototype

```c
int ft_printf(const char *format, ...);
