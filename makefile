HEADERS = -I Ejercicio_1/headers/

SRC_COMMON = Ejercicio_1/sources/*.cpp

ej1:
	g++ -std=c++17 -Wall -Wextra -Wpedantic $(HEADERS) -g Ejercicio_1/main1.cpp $(SRC_COMMON) -o ejercicio1
	./ejercicio1


clean:
	rm -f ejercicio1 ejercicio2 ejercicio3
	rm -rf *.dSYM/