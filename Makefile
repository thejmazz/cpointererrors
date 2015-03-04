SRCS = $(wildcard *.c)

PROGS = $(patsubst %.c,%,$(SRCS))

all: $(PROGS)

%: %.c
	gcc -g -o $@ $<

clean:
	rm p1 p2 p3
