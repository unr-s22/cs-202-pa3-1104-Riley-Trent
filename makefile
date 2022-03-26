moneytest: main.cpp Money.o
	g++ -std=c++11 -o moneytest main.cpp Money.o
Money.o: Money.cpp
	g++ -std=c++11 -c Money.cpp
clean:
	rm *.o moneytest