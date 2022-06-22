g++ -Wall -pedantic -c -Iinclude -o tporo.h lib/tporo.cpp -o lib/tporo.o
g++ -Wall -pedantic -Iinclude src/main.cpp lib/tporo.o -o tad

