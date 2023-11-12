CC = gcc
SOURCE = test_ll_cycle.c ll_cycle.c
OBJ = test_ll_cycle.o ll_cycle.o
HEADER = ll_cycle.h

.PHONY: all clean

all: ll_cycle

ll_cycle: $(OBJ)
	$(CC) $^ -o $@ -Wall -Wextra -Wpedantic

%.o: %.c $(HEADER)
	$(CC) -c $< -o $@

clean:
	rm -rf ll_cycle
	rm -rf $(OBJ)
