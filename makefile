statistics.o: src/statistics.cpp include/statistics.h
	g++ -c -I include/ src/statistics.cpp -o bin/statistics.o

clean:
	rm -r bin/