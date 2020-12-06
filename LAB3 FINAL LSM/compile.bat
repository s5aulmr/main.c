echo compiling

gcc -c Main.c -o Main.o
gcc -c BML.c -o BML.o
gcc -c Pump1.c -o Pump1.o
gcc -c Pump2.c -o Pump2.o
gcc -c Pump3.c -o Pump3.o

gcc -o MyProgram.exe Main.o BML.o Pump1.o Pump2.o Pump3.o
.\MyProgram.exe
pause