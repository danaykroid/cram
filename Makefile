.PHONY: clean 
clean:
	rm -rf build/

.PHONY: build 
build:
	cmake -S . -B build
	cmake --build build 

.PHONY: run 
run:
	build/cram
