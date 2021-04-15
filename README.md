<p align="center">
   <a href="https://github.com/derpmagician/simple_shell">[ Simple Shell ]</a>
</p>

<p align = "center">
   <img src="https://i.ibb.co/cKW8WHL/njig.jpg" alt="njig" border="0">
</p>

<p align="center">
	In this project you can see the different functions of the Simple Shell project
</p>

---

Description
-----------
In this repository you have a simple implementation of the command interpreter for the system to 
receive standard commands (Simple Shell) this version has characteristics similar to some aspects 
of the shell standard.

<ol>
	<li>The shell breaks the input into tokens: words and operators; see Token Recognition.</li>
	<li>The shell parses the input into simple commands.</li>
	<li>The shell performs various expansions (separately) on different parts of each command, resulting in a list of pathnames and fields to be treated as a command and arguments.</li>
	<li>The shell executes a function, built-in, executable file, or scripts</li>
	<li>The shell optionally waits for the command to complete and collects the exit status.</li>
</ol>


<p>File Structure:</p>

```
shell.h - Header file. Prototypes and extern variables definition.

_shell.c - main function
contains:
main

looper.c - Iterative component, which calls the functions that are responsible for: printing the prompt, reading the command line, parsing the command line and executing.
contains:
_loop

_getline.c - Reads an entire line from stream and stores it in a address of the buffer.
contains:
_getline

_getc.c - Reads the next character in the stream.
contains:
_getc

reader.c - Reads the command lines entered in the prompt.
contains:
_read_line

auxprint.c - Auxiliarity functions for printing
contains:
_puts
_putchar
_atoi

buildins.c -All the built-in functions
contains:
_cd
_help
hsh_exit
_env
_setenv

enviroget.c - Searches for a variable in the list of environment variables and returns the corresponding string.
contains:
_getenv

errorallocator.c - Auxiliary memory functions
contains:
alloc_error
_realloc

executer.c - Checks if the command entered is a built-in, otherwise, it sends it to its execution in _launch.
contains:
_execute
builtin_func[]

launcher.c -Creates a child process, in which it makes the execve system call, passing the commands correctly formatted from the PATH.
contains:
_launch

masaux.c
contains: - Auxiliary string functions
_strcat
_strcmp
_strcpy
_strncmp

pathcheker.c - Checks if the command entered in the prompt is in one of the paths, and in this case, it gives the right format to enter it to the execve system call.
contains:
alloc_error2
alloc_error1
_check_path

signal.c - Makes it unable to exit the Shell with Ctrl^C
contains:
sigint_handler

split_line.c - Calls the _strtok function to split the line entered into the prompt and then returns it as an array containing the tokens.
contains:
_split_line

splitpath.c - Responsible for splitting the string returned by _getenv on each of the paths.
contains:
_split_path

straux.c - Auxiliarity functions and _strtok breaks string into a series of tokens using a delimiter
contains:
_strlen
_strcspn
_strspn
_strtok_r
_strtok
```
---
List of allowed functions
-----------

```
exit ()
getline()
...
...
...
```

---
Compilation
------------

The shell will be compilation this way:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

---
Examples
-----------
```
In this part will be put some examples
```

---
## [Authors](https://github.com/derpmagician/simple_shell/blob/main/AUTHORS)

<ul>
	<li>Renzo Perez</li>
	<li>Andres Condezo</li>
	<li>Jose Herrera</li>
</ul>

-------
