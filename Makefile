FILES=$(shell find ./ )

all:
	clang++ $(FILES)
	make -C ./m1/ex00
clean:
	echo clean;