moneytest: main.cpp Money.o account.o
	g++ -std=c++11 -o moneytest main.cpp Money.o account.o
Money.o: Money.cpp
	g++ -std=c++11 -c Money.cpp
account.o: account.cpp
	g++ -std=c++11 -c account.cpp
clean:
	rm *.o moneytest