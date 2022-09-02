all: clean
	gcc main.c functions.c -o converter

clean:
	rm -f converter