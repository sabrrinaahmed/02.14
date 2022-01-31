all: message.h
	g++ message.cpp main.cpp -o running

clean:
	rm *running

run: running
	./running