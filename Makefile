CC=g++
CFLAGS=-c
SFML_LIBS=-lsfml-graphics -lsfml-window -lsfml-system

all:
	$(CC) $(CFLAGS) main.cpp
	$(CC) main.o -o sfml-app $(SFML_LIBS)
