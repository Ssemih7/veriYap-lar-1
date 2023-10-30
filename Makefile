CompileAndRun:Program Run

Program: class main
	g++ ./lib/BagliListe.o ./lib/Dugum.o ./lib/main.o -o ./bin/program
	 

class:
	g++ -I "./include" -c ./src/BagliListe.cpp -o ./lib/BagliListe.o
	g++ -I "./include" -c ./src/Dugum.cpp -o ./lib/Dugum.o
main:
	g++ -I "./include" -c ./src/main.cpp -o ./lib/main.o

Run:
	./bin/program.exe
