# Suman Karanjit
# CSIS 252 - Asmt #2
# Makefile - prog2

# Note: the descriptions in this makefile were created by Rick Walker

# This file allows an administrator of another unix system to "install"
# the 'prog2' program on his/her system.

# MACRO DEFINITIONS

# The EXE macro names the executable

EXE = prog2

# The CC macro is used to indicate which compiler to use.
# This allows you to write the rules and then have the installer
# specify the appropriate compile tool.

CC = g++

# The OBJECTS macro indicates all the .o files necessary to "build
# your executable ... to simplify later lines

OBJECTS = main.o evalPostFix.o infixtopostfix.o token.o

# The LFLAGS macro is used to tell the compiler to use other libraries.

LFLAGS =

# The CFLAGS macro is used to indicate flags for the compiler.
# Eg. you MAY want to put '-g' on this line to generate symbol table
# information so that you can use the 'ladebug' debugger to view your
# program in execution, or you could use the '-O' option to do
# optimized compilation, etc.  Again, as with other macros, it may
# be empty.

CFLAGS =

# This ends the MACRO DEFINITIONS SECTION

# DEPENDENCIES AND RULES SECTION
# This next section contains groups of lines that look like:
#
# target: dependencies
#       rules(s) or action(s)
#
# Note that each group has a line that starts on the left margin
# followed by one or more lines that begin with a TAB
# This is VERY IMPORTANT ... THE RULES MUST START WITH A TAB!!!!
#
# The dependencies list the files that the target DEPENDS on,
# the rules tell how to (re)construct the target.
#
# Where ever you see a $(macro_name), the 'make' utility makes a
# text substitution, using the Right Hand Side of the macro
# definitions from the above section.
#
# Compiling source code to create the object files.
# This is an example only and is modified for your needs
# A backslash continues a command on the next line if needed.
# The backslash would have to be THE LAST character on the line.
# A semicolon can be used to separate multiple commands.

$(EXE):         $(OBJECTS)
		$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:         main.cpp
		$(CC) $(CFLAGS) -c main.cpp

evalPostFix.o:         evalPostFix.cpp
		$(CC) $(CFLAGS) -c evalPostFix.cpp

infixtopostfix.o: infixtopostfix.cpp
		$(CC) $(CFLAGS) -c infixtopostfix.cpp

token.o:         token.cpp
		$(CC) $(CFLAGS) -c token.cpp



DEPS = stackType.h, queueType.h

# The next lines allow you to type 'make clean' to remove unnecessary
# files following compilation and linking of your program.  Generally,
# the executable is not deleted but for purposes of this class, remove
# the executable to reduce the size of the tarred and compressed file
# you are to electronically handin.

clean:
	rm -rf $(EXE) $(OBJECTS) *~

