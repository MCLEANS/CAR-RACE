CC = g++
CFLAGS = -Wall -c --std=c++17
LFLAGS = -Wall
SDL_INFLAGS = -I /usr/include/SDL2
CATCH_INFLAGS = -I /home/mcleans/Desktop/Catch
SDL_LIBFLAGS = -L /usr/lib/x86_64-linux-gnu -lSDL2 -lSDL2_image -lSDL2_mixer
TEST_OBJS = test_default.o test_graphics.o graphics.o 
OBJS  = main.o graphics.o texture.o

all : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) $(SDL_LIBFLAGS) -o main 

tests : $(TEST_OBJS)
	$(CC) $(LFLAGS) $(TEST_OBJS) $(SDL_LIBFLAGS) -o tests

main.o : main.cpp graphics.hpp texture.hpp
	$(CC) $(CFLAGS) $(SDL_INFLAGS) main.cpp

graphics.o : graphics.cpp 
	$(CC) $(CFLAGS) $(SDL_INFLAGS) graphics.cpp

texture.o : texture.cpp texture.hpp
	$(CC) $(CFLAGS) $(SDL_INFLAGS) texture.cpp



test_default.o :test_default.cpp 
	$(CC) $(CFLAGS) $(CATCH_INFLAGS) test_default.cpp 

clean : 
	rm *.o main 

clean_tests : 
	rm *.o tests 

run : 
	./main 

run_tests :
	./tests 
