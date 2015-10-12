CC=gcc
CFLAGS=-Wall -g
EXE="$$(ls | grep "ex" | xargs -I{} echo {}/main)"

all:
	echo ${EXE} | xargs -I{} make {}

.PHONY: clean
clean:
	echo ${EXE} | xargs -I{} rm -f {}
