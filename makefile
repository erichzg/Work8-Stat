all: file_info.c
	gcc -o file_info file_info.c
run: all
	./file_info
