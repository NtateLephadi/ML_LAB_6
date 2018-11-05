CFLAGS = -O
CC = g++

driver: driver.o
	$(CC) $(CFLAGS) -o driver driver.o node.o --std=c++11

driver.o: node.o driver.cpp
	$(CC) $(CFLAGS) -c driver.cpp --std=c++11

node.o: node.h node.cpp
	$(CC) $(CFLAGS) -c node.cpp --std=c++11

run:
	./driver

clean:
	rm -f core *.o
