CC=g++
CFLAGS= -c -Wall -Werror
LDFLAGS=
SOURCES=geometry.cpp
OBJECTS=$(SOURCES:.cpp=.o)
	EXECUTABLE=geometry
all: $(SOURCES) $(EXECUTABLE)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@
	
.cpp.o:
	$(CC) $(CFLSGS) $< -o $@
