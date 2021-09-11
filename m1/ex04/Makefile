CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=main.cpp\




OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=replace

all:$(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC)   $(OBJECTS) -o $@
	rm -f *.o

clean:
		@rm -f $(EXECUTABLE)

fclean:
		@rm -f newf.replace
		@rm -f $(EXECUTABLE)

re: all
	./$(EXECUTABLE)


.cpp.o:
	$(CC) $(CFLAGS) $< -o $@