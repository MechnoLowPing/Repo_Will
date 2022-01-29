
SRC = ./src
TARGET = ./target
CC = g++-9
CFLAGS = -std=c++2a -Wall -Werror


all: clean compile

compile:
		$(CC) -o $(TARGET)/main.out $(SRC)/main.cpp $(CFLAGS)

clean:
		rm -rf $(TARGET)/*.out
