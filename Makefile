tcc:
	tcc -run ./hello.c

compile: clean
	cc ./hello.c

run: compile
	./a.out

clean:
	rm ./a.out

.PHONY: tcc
