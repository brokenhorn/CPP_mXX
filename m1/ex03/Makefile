CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=main.cpp\
		HumanA.cpp\
		HumanB.cpp\
		Weapon.cpp\



OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=Unnecessary_violence

all:$(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC)   $(OBJECTS) -o $@
	rm -f *.o

clean:
		@rm -f $(EXECUTABLE)

fclean:
		#@rm -f $(OBJ)
		@rm -f $(EXECUTABLE)

re: all
	./$(EXECUTABLE)


.cpp.o:
	$(CC) $(CFLAGS) $< -o $@