exec: statistics.o main.o
	g++ build/statistics.o build/main.o -o exec

main.o: test/main.cpp include/statistics.h
	g++ -c -I include/ test/main.cpp -o build/main.o

statistics.o: src/statistics.cpp include/statistics.h
	g++ -c -I include/ src/statistics.cpp -o build/statistics.o

compila: exec

esegui:
	./exec

clean:
	rm -r build/*