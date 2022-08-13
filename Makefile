CXX=clang++
CFLAGS += -I$(CPPUTEST_HOME)/include
CPPUTEST_LIBS = $(CPPUTEST_HOME)/lib

test: ./unit_tests/*.cpp ./src/*.cpp
	$(CXX) $(CFLAGS) $^ -L$(CPPUTEST_LIBS) -lCppUTest -o $@
run: test
	./test
clean:
	rm -f test
re: clean all
