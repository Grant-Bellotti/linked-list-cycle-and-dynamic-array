CC = gcc
SOURCE = test_growing_arrays.c growing_arrays.c
OBJ = test_growing_arrays.o growing_arrays.o
HEADER = growing_arrays.h

.PHONY: all clean

all: growing_arrays

growing_arrays: $(OBJ)
	$(CC) $^ -o $@ -Wall -Wextra -Wpedantic

%.o: %.c $(HEADER)
	$(CC) -c $< -o $@

clean:
	rm -rf growing_arrays
	rm -rf $(OBJ)
