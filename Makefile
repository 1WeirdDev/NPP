CC      = gcc
CFLAGS  = -g
RM      = rm -f
RF      = rd /s /q
MF 		= mkdir -p
FILES	= src/**.c

default: all

all: build run_debug

build:
	$(MF) bin
	$(CC) -o bin/n++.exe -Wall $(CFLAGS) -Isrc/ $(FILES) -DCOMPILER
clean:
	rm -rf bin

update:
	clean
	Push.bat
run_debug:
	echo on
	gdb -ex run --args bin/n++ -i
	#gdb bin/n++
	#run  -i
run:
	bin/n++ -i