
CC ?= clang

CFLAGS += -I.

CYCL_HEADERS =
CYCL_SOURCES =

all: test

test: test.c $(CYCL_HEADERS) $(CYCL_SOURCES)
	$(CC) $(CFLAGS) $(CYCL_SOURCES) $< -o $@

.PHONY: clean
clean:
	rm -f test


