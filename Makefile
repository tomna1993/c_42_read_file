CC := gcc
#CFLAGS := 
DEST := ./build

random: read_file.c
	mkdir -p $(DEST)
	$(CC) read_file.c -lcs50 -o $(DEST)/read_file