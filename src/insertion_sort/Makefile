.PHONY: test
test: build/Makefile
	cd build && make -s
	./build/unittest

.PHONY: clean
clean:
	rm -rf build

build/Makefile: build
	cd build && cmake .. -DCMAKE_CXX_STANDARD=11

build:
	mkdir build
