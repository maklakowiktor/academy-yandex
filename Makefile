CC = clang++
FOLDER = 1_4_Conditions_and_loops
SOURCES = $(FOLDER)/main.cpp
OUT = $(FOLDER)/app
COMPILER_FLAGS = -Wall -Wextra -pedantic -g -O2 -std=c++20

all: build run

build:
	@$(CC) $(SOURCES) -o $(OUT) $(COMPILER_FLAGS)

run:
	@./$(OUT)