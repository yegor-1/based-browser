CC=/usr/bin/cc
CFLAGS= -std=c89 -Wall -Wextra

all: based-browser

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $^

based-browser: main.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm *.o based-browser
