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
Styling
-----------

The repository uses the Betty Style, using betty-style.pl and betty-doc.pl .
Also it doesn't have more than 5 functions per file

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
[._.] ls -la
total 120
drwxrwxr-x 3 joseheco joseheco  4096 abr 15 09:25 .
drwxrwxr-x 3 joseheco joseheco  4096 abr  9 16:49 ..
-rw-rw-r-- 1 joseheco joseheco   172 abr 14 14:07 AUTHORS
-rw-rw-r-- 1 joseheco joseheco  1007 abr 13 14:17 auxprint.c
-rw-rw-r-- 1 joseheco joseheco  2555 abr 12 17:17 buildins.c
-rw-rw-r-- 1 joseheco joseheco   519 abr 12 16:47 enviroget.c
-rw-rw-r-- 1 joseheco joseheco  1103 abr  9 16:49 errorallocator.c
-rw-rw-r-- 1 joseheco joseheco   790 abr 12 14:45 executer.c
-rw-rw-r-- 1 joseheco joseheco   310 abr  9 16:49 _getc.c
-rw-rw-r-- 1 joseheco joseheco  1344 abr  9 16:49 _getline.c
drwxrwxr-x 8 joseheco joseheco  4096 abr 14 15:53 .git
-rwxrwxr-x 1 joseheco joseheco 23256 abr 15 09:25 hsh
-rw-rw-r-- 1 joseheco joseheco   688 abr 12 14:55 launcher.c
-rw-rw-r-- 1 joseheco joseheco   791 abr 12 16:47 looper.c
-rwxrwxr-x 1 joseheco joseheco   145 abr  9 16:49 man_1_simple_shell
-rw-rw-r-- 1 joseheco joseheco  1956 abr 12 16:47 masaux.c
-rw-rw-r-- 1 joseheco joseheco  2081 abr 12 17:18 pathcheker.c
-rw-rw-r-- 1 joseheco joseheco   358 abr  9 16:49 reader.c
-rw-rw-r-- 1 joseheco joseheco  1542 abr 14 15:46 README.md
-rw-rw-r-- 1 joseheco joseheco   266 abr  9 16:49 _shell.c
-rw-rw-r-- 1 joseheco joseheco  2130 abr 13 14:17 shell.h
-rw-rw-r-- 1 joseheco joseheco   239 abr 12 14:37 signal.c
-rw-rw-r-- 1 joseheco joseheco   783 abr 12 14:37 split_line.c
-rw-rw-r-- 1 joseheco joseheco  1115 abr 12 16:46 splitpath.c
-rw-rw-r-- 1 joseheco joseheco  1783 abr 12 14:37 straux.c
[._.] pwd
/home/joseheco/GitHub/Shell/simple_shell
[._.] cd ..
[._.] pwd
/home/joseheco/GitHub/Shell
[._.] ls
simple_shell
[._.]
```

---
## [Authors](https://github.com/derpmagician/simple_shell/blob/main/AUTHORS)

<ul>
	<li>Renzo Perez</li>
	<li>Andres Condezo</li>
	<li>Jose Herrera</li>
</ul>

-------
