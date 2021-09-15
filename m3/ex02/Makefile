CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=main.cpp\
		ClapTrap.cpp\
		Scavtrap.cpp\
		FragTrap.cpp





OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=out

all:$(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC)   $(OBJECTS) -o $@
	rm -f *.o

clean:
		@rm -f $(EXECUTABLE)

fclean:
		@rm -f $(EXECUTABLE)

re: all
	./$(EXECUTABLE)


.cpp.o:
	$(CC) $(CFLAGS) $< -o $@