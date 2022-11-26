CC=gcc
CFLAGS=-g
OUT=out.out
OBJ=obj/main.o obj/Operations.o obj/Job.o

run: build
	./$(OUT)

build: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o$(OUT)

obj/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@
