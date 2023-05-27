# GET_NEXT_LINE

Welcome to the get_next_line repository! This project is part of the curriculum at School 42 and focuses on creating a function that reads a line from a file descriptor.

## Table of Contents
- [Introduction](#introduction)
- [Objective](#objective)
- [Features](#features)
- [Technologies Used](#technologies-used)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)

## Introduction

In this repository, you will find the get_next_line project, which is a crucial step in developing your file reading skills in C. The main objective is to create a function that reads a line from a file descriptor, allowing you to handle file input more efficiently.

Explore the repository, study the code, and enhance it to improve your C programming skills.

## Objective

The objective of the get_next_line project is to enhance your understanding of file input/output operations in C. By implementing the get_next_line function, you will gain experience in reading files, handling file descriptors, and managing memory dynamically.

Moreover, the project aims to improve your problem-solving skills, code organization, and attention to detail. You will encounter various challenges while implementing the get_next_line function, allowing you to grow as a programmer.

## Features

- Reading a line from a file descriptor
- Support for multiple file descriptors
- Handling different buffer sizes
- Managing memory dynamically

## Technologies Used

- C programming language

## Installation

To use the get_next_line function in your projects, follow these steps:

1. Clone the repository:
   ```shell
   git clone [https://github.com/your-username/get_next_line.git](https://github.com/V4R3J4O/GET_NEXT_LINE.git)

2. Change to the project directory:
    ```shell
    cd get_next_line

3. Include the get_next_line.h header file in your code:
    ```c
    #include "get_next_line.h"

4. Compile your project with the get_next_line function:
    ```shell
    gcc your_project.c get_next_line.c get_next_line_utils.c -o your_project

Now you can use the get_next_line function in your project by including the get_next_line.h header file and compiling it with the necessary source files.

## Usage

- To use the get_next_line function, call it in your code to read a line from a file descriptor.
    ```c
    #include "get_next_line.h"
    int main(void)
    {
      int   fd;
      char *line;
      
      fd = open(file.txt, ORDONLY);
      while (get_next_line(line, fd) > 0)
      {
        printf("%s", line);
        free(line);
      }
        close(fd);
        return (0);
    }

## Contributing

Contributions to the get_next_line project are welcome! If you find any issues or have suggestions for improvements, please feel free to open an issue or submit a pull request. Your contributions can help enhance the function and make it even more valuable for others.
Acknowledgments

This project was completed as part of the curriculum at School 42.
