# __0x09. C - Static libraries__

## TASKS

### 0. A library is not a luxury but one of the necessities of life

- Create the static library libmy.a containing previous funcitons

### 1. Without libraries what have we? We have no past and no future

- Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.

## __STEPS__

### - add prototypes to main.h file

### - write c code pertaining to the prototypes

### - create object files of the c codes written by using 'gcc -c *.c'

### - create library (libmy) by using 'ar rcs lilbmy.a'

### - add object files to library with 'ar rcs libmy.a *.o'

### - check content of library with 'ar -t libmy.a' and 'nm libmy.a'
