CC=gcc
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=main

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) ./obj/$(OBJECTS) -o ./obj/$@

.c.o:
	$(CC) $(CFLAGS) $< -o ./obj/$@

tcc:
	tcc -run $(SOURCES)

compile: clean clang

gcc: clean
	gcc $(SOURCES) -o ./obj/$(OBJECTS)

clang: clean
	clang $(SOURCES) -o ./obj/$(OBJECTS)

run:
	./obj/main

clean:
	rm ./obj/* || true

.PHONY: tcc
