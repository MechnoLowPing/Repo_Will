
SRC = ./src
TARGET = ./target
CC = g++-9
CFLAGS = -std=c++2a -Wall -Werror
RM = rm -rf

all: clean compile

compile: calculate
		$(CC) $(CFLAGS) -o $(TARGET)/main.out $(SRC)/main.cpp $(TARGET)/calculate.o

calculate:
		$(CC) $(CFLAGS) -c -o $(TARGET)/calculate.o $(SRC)/calculate.cpp 

clean:
		$(RM) $(TARGET)/*.out