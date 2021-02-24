 CC=g++
 CFLANGS= -Werror -Wall
 all:main
 main: geometry.cpp
	$(CC) $(CFLANGS) geometry.cpp

