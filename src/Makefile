# vars
PROGRAM_NAME_C = vector.c
EXECUTABLE_NAME = vector
MATH_LIB = -lm

# compile all
all: build_c

build_c: $(PROGRAM_NAME_C)
	gcc -o $(EXECUTABLE_NAME) -Wall -Wextra $(PROGRAM_NAME_C) -g $(MATH_LIB)

build_c_optimized: $(PROGRAM_NAME_CXX)
	gcc -o $(EXECUTABLE_NAME) -Wall -Wextra $(PROGRAM_NAME_C) -O3 $(MATH_LIB)

clean:
	rm $(EXECUTABLE_NAME)
