# The C Programming Language

This repository contains exercises, examples, and notes from the book **"The C Programming Language"** by Brian W. Kernighan and Dennis M. Ritchie. The goal of this repository is to aid in learning the C programming language, covering topics from the basics to more advanced concepts.

## About the Book

*The C Programming Language* (often referred to as *K&R*) is considered the definitive guide for learning C. Written by one of the creators of the language, Dennis Ritchie, this book presents the language in a concise and clear way, covering many aspects of systems programming and C's core features.

## How to use this repository

### Prerequisites

- [CMake](https://cmake.org/download/)
- [GCC](https://gcc.gnu.org/)
- [Make](https://www.gnu.org/software/make/)

### Build Instructions

1. Clone the repository:

```bash
$ git clone https://www.github.com/ddiogoo/c.git
```

2. Navigate to the project directory:

```bash
$ cd c/project_name
```

3. Create a build directory:

```bash
$ mkdir build
$ cd build
```

4. Run CMake to configure the project:

```bash
$ cmake ..
```

5. Build the project:

```bash
$ make
```

## Structure

```
c/                       # Root directory
├── project_name/
|   ├── build/           # Build directory
│   ├── CMakeLists.txt   # CMake configuration file for project build      
│   ├── main.c           # Main source file
|   └── ...              # Other project files
└── README.md            # Project documentation
```

## Goals

- Develop a strong foundation in C programming.
- Understand the internal workings of memory, pointers, and low-level programming.
- Solve exercises to reinforce each chapter’s lessons.

## Resources

- [The C Programming Language, 2nd Edition (K&R)](https://www.amazon.com/Programming-Language-2nd-Brian-Kernighan/dp/0131103628)

## Contributing

Contributions are welcome! For major changes, please open an issue first to discuss what you would like to change.
