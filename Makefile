
CC ?= clang

CFLAGS += -I. -Wall -O3

CYCL_HEADERS = cycles.h
CYCL_SOURCES = cycles.c

all: test

test: test.c $(CYCL_HEADERS) $(CYCL_SOURCES)
	$(CC) $(CFLAGS) $(CYCL_SOURCES) $< -o $@

.PHONY: clean
clean:
	rm -f test


