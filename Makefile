CXX=clang++
INCLUDES= -I/usr/include/cppconn -L/usr/lib/mysqlcppconn -lmysqlcppconn -Iincludes/
CXXEXTRAS=-Wall -Wextra -Werror -pedantic 
CXXFLAGS=-std=c++20 -g -fstandalone-debug

exec: bin/exec

bin/exec: ./src/main.cc ./src/database.cc ./src/school.cc
	$(CXX) $(CXXFLAGS) $(CXXEXTRAS) $(INCLUDES) $^ -o $@

.DEFAULT_GOAL := exec
.PHONY: clean exec tests

clean:
	rm -rf bin/* obj/*

tests: tests/tests.cc ./src/main.cc ./src/database.cc ./src/school.cc
	$(CXX) $(CXXFLAGS) $(CXXEXTRAS) $(INCLUDES) $^ -o $@
