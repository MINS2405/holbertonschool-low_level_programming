# File I/O in C - Holberton School

This project covers fundamental concepts of file input/output (I/O) operations in C, including the use of system calls such as `open`, `read`, `write`, and `close`. It also explains file descriptors, file permissions, and working with flags like `O_RDONLY`, `O_WRONLY`, and `O_RDWR`.

## Learning Objectives

By the end of this project, you should be able to:
- Explain the concept of file descriptors and their role in file operations.
- Identify the three standard file descriptors (`STDIN_FILENO`, `STDOUT_FILENO`, `STDERR_FILENO`) and their purpose.
- Use the system calls `open`, `close`, `read`, and `write` to interact with files.
- Understand and use file flags (`O_RDONLY`, `O_WRONLY`, `O_RDWR`) for different file modes.
- Create, read, and write files while setting proper permissions using the `open` system call.
- Distinguish between system calls and library functions.
- Implement file operations following best practices in C.

## Files and Functions

### 0. Tread lightly, she is near
**File:** `0-read_textfile.c`  
**Description:** Reads a text file and prints it to the POSIX standard output.  
Prototype:  
`ssize_t read_textfile(const char *filename, size_t letters);`

### 1. Under the snow
**File:** `1-create_file.c`  
**Description:** Creates a file and writes content to it.  
Prototype:  
`int create_file(const char *filename, char *text_content);`

### 2. Speak gently, she can hear
**File:** `2-append_text_to_file.c`  
**Description:** Appends text at the end of a file.  
Prototype:  
`int append_text_to_file(const char *filename, char *text_content);`

### 3. cp
**File:** `3-cp.c`  
**Description:** Copies the content of one file to another file.  
Usage:  
`./cp file_from file_to`

## Usage

### Compilation
To compile the provided files:  
`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main_file> <file>.c -o <output_name>`

### Example Execution
To test the functions, compile them with the corresponding `main.c`:  
`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o read_textfile`  
`./read_textfile example.txt`

## System Calls Overview

### `open`
- Opens a file and returns a file descriptor.
- Flags:
  - `O_RDONLY`: Open for reading only.
  - `O_WRONLY`: Open for writing only.
  - `O_RDWR`: Open for reading and writing.
  - `O_CREAT`: Create the file if it does not exist.
  - `O_APPEND`: Append data to the end of the file.

### `read`
- Reads data from a file descriptor into a buffer.

### `write`
- Writes data from a buffer to a file descriptor.

### `close`
- Closes a file descriptor, releasing the associated resources.

## File Descriptors

- **0 (`STDIN_FILENO`)**: Standard Input.
- **1 (`STDOUT_FILENO`)**: Standard Output.
- **2 (`STDERR_FILENO`)**: Standard Error.

## Example Code Snippet

Here’s an example of reading from a file and printing its content:
```c
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int fd = open("example.txt", O_RDONLY);
    char buffer[1024];
    ssize_t bytes_read;

    if (fd == -1) {
        perror("Error opening file");
        return (1);
    }

    bytes_read = read(fd, buffer, 1024);
    if (bytes_read == -1) {
        perror("Error reading file");
        close(fd);
        return (1);
    }

    write(STDOUT_FILENO, buffer, bytes_read);
    close(fd);

    return (0);
}

