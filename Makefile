CXX=clang++
INCLUDES=-Iincludes/
CXX_FLAGS=-std=c++20 -g -Wall -Wextra -Werror -pedantic $(INCLUDES)

exec: main.o
	$(CXX) $(CXX_FLAGS) obj/*.o -o bin/exec

main.o: src/main.cc school.o includes/*.hpp
	$(CXX) $(CXX_FLAGS) -c src/main.cc -o obj/main.o

school.o: src/school.cc includes/school.hpp
	$(CXX) $(CXX_FLAGS) -c src/school.cc -o obj/school.o

.DEFAULT_GOAL := exec
.PHONY: clean exec

clean:
	rm -fr bin/* obj/*