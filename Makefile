CC=/usr/bin/cc
CFLAGS=-std=c89 -Wall -Wextra

all: based-browser

based-browser: util.c util.h main.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm based-browser
