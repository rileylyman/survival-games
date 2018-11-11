CC=g++
CFLAGS=-std=c++11 -I.
SFML_LIBS=-lsfml-graphics -lsfml-window -lsfml-system

DEPS=*.h
OBJ=%.o

all: 
	$(CC) *.cpp $(DEPS) -o sfml-app $(SFML_LIBS)
