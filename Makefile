example: example.c
	gcc -o example example.c `pkg-config --libs --cflags gtk+-2.0`
