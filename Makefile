CC := g++
FLAGS := -I include/ -Wall
BUILD := build/
SRC := src/
TARGET := main.out

all: main

intruso:
	$(CC) $(FLAGS) -c $(SRC)/intruso.cpp -o $(BUILD)/intruso.o

main: intruso
	$(CC) $(FLAGS) $(BUILD)/*.o $(SRC)/main.cpp -o $(TARGET)

clean:
   	$(RM) -r $(BUILD)/*.$(TARGET)
