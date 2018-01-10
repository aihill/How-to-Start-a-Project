CC  = gcc
CXX = g++
TARGET_OS = linux

TESTS = \
	tests/test_tensor.cc

BIN = test_all

FLAGS += -std=c++11 -lgtest_main -lgtest -lpthread -I./include

all:
	$(CXX) $(TESTS) -o $(BIN) $(FLAGS)
	
clean:
	rm $(BIN)
