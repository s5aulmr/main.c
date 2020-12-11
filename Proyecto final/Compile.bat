echo compiling

gcc -c ConvertMachine.c -o ConvertMachine.o
gcc -c Longitud.c -o Longitud.o
gcc -c Masa.c -o Masa.o
gcc -c Volumen.c -o Volumen.o
gcc -c Area.c -o Area.o
gcc -c Otros.c -o Otros.o
gcc -c delay.c -o delay.o

gcc -o MyProgram.exe ConvertMachine.o Longitud.o Masa.o Volumen.o Area.o Otros.o delay.o
.\MyProgram.exe
pause