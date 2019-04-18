#My new project

## Introduction

> Simple Shell is a project designed to work like the Linux Shell.  The goal was to create a command-line interpreter providing a line user interface. Originally Linux Shell was created to provide a method of communication between the user and the Kernel.  "The kernel is a computer program that is the core of a computer’s operating system, with complete control over everything in the system (https://www.geeksforgeeks.org/introduction-linux-shell-shell-scripting/)." Thus giving the user the ability to communicate with the operating systems of the computer (via Kernel).  The shell accepts the human-readable commands from the user and translates them into executable commands the kernel understands.  The kernel is, therefore, able to execute the commands.  Simple Shell is designed to work in the same way. As with the Linux Shell, there are some built-in functions such as; exit, env.  Simple Shell is able to handle path.   Commands written on the command line can be executed without writing the path.

## Code Samples

> Command:  ls -l
This requests a list of files in the long format including permissions, dates, user information.

## Installation

Prerequisites for Simple Shell include using the following editors: vi, vim or emacs.  All files have been compiled on Ubuntu 14.04 LTS.  Helper Functions used by the Simple Shell to turn human-readable commands into kernel executable commands were written in C and compiled with gcc 4.8.4.  To compile Simple shell use gcc 4.8.4 with the following flags: -Wall -Werror -Wextra and -pedantic.

Installation requires Simple Shell repository to be uploaded from git hub. The repository included the shell main file as well as the shell.h header and the Helper function files.  The header, shell.h contains the prototypes for the Helper Functions and the necessary libraries they use.  Create a Simple Shell directory using Linux command. Compile the .c files. Compile shellmain.c using:

 ` ` `
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
` ` `
At the command prompt use ./hsh to call the Simple Shell.
The command prompt: ($) should appear.  Begin typing in Linux Shell commands.
` ` `
($) ls
` ` `

Simple Shell was built using C language.
