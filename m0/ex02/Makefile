CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=Account.cpp\
		tests.cpp\


OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE= TheJobOfYourDreams

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