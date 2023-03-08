exec: statistics.o discrete_probability.o continuous_probability.o math.o main.o
	g++ build/statistics.o build/discrete_probability.o build/continuous_probability.o build/math.o build/main.o -o exec

main.o: test/main.cpp include/statistics/statistics.h include/probability/discrete_probability.h
	g++ -c -I include/ test/main.cpp -o build/main.o

statistics.o: src/statistics/statistics.cpp include/statistics/statistics.h
	g++ -c -I include/ src/statistics/statistics.cpp -o build/statistics.o

discrete_probability.o: src/probability/discrete_probability.cpp include/probability/discrete_probability.h
	g++ -c -I include/ src/probability/discrete_probability.cpp -o build/discrete_probability.o

continuous_probability.o: src/probability/continuous_probability.cpp include/probability/continuous_probability.h
	g++ -c -I include/ src/probability/continuous_probability.cpp -o build/continuous_probability.o

math.o: src/tools/math.cpp include/tools/math.h
	g++ -c -I include/ src/tools/math.cpp -o build/math.o

compila: exec

esegui:
	./exec

clean:
	rm -r build/*