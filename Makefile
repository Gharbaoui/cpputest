CXX=clang++
CFLAGS += -I$(CPPUTEST_HOME)/include
CPPUTEST_LIBS = $(CPPUTEST_HOME)/lib

run: ./unit_tests/*.cpp ./src/*.cpp
	@ $(CXX) $(CFLAGS) $^ -L$(CPPUTEST_LIBS) -lCppUTest -o $@
	./$@ -c
clean:
	rm -f run
re: clean run
