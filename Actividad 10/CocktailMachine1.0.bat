echo compiling
gcc -c CocktailMachine.c -o CocktailMachine.o
gcc -c CMachine.c -o CMachine.o
gcc -o Test.exe CocktailMachine.o CMachine.o
.\Test.exe
pause