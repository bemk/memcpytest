CC=gcc

all: test1 test2 test3 test4 test5

test1: 1
	time -p ./1

test2: 2
	time -p ./2

test3: 3
	time -p ./3

test4: 4
	time -p ./4

test5: 5
	time -p ./5

1: memcpy1.c
	$(CC) $(CFLAGS) -o 1 memcpy1.c

2: memcpy2.c
	$(CC) $(CFLAGS) -o 2 memcpy2.c

3: memcpy3.c
	$(CC) $(CFLAGS) -o 3 memcpy3.c

4: memcpy4.c
	$(CC) $(CFLAGS) -o 4 memcpy4.c

5: memcpy5.c
	$(CC) $(CFLAGS) -o 5 memcpy5.c

clean:
	rm 1 2 3 4 5