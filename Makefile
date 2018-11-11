CC=g++
CFLAGS=-std=c++11 -I.
SFML_LIBS=-lsfml-graphics -lsfml-window -lsfml-system

DEPS=*.h
OBJ=main.o Component.o Entity.o 

APP_NAME=sfml-app

all: sfml-app

%.o: %.cpp
	$(CC) -c $< -o $@

%.o: %.h
	$(CC) -c $< -o $@

sfml-app: $(OBJ)
	@echo "Building"
	$(CC) -o $(APP_NAME) $(OBJ) $(SFML_LIBS)

clean:
	@echo "Cleaning"
	$(RM) $(APP_NAME) *.o *.gch
