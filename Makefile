CC=gcc
AR=ar
FLAGS= -Wall -g
FILES= basicMath.c power.c
OBJECTS_LIB= basicMath.o power.o

.PHONY: all clean

export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

all: mains maind
mains: libmyMath.a main.o 
	gcc $(FLAGS) -o mains.o main.o ./libmyMath.a 
maind: libmyMath.so main.o
	gcc $(FLAGS) -o maind.o main.o ./libmyMath.so
#Ugliest thing i have ever done....
mymaths: libmyMath.a
mymathd: libmyMath.so	
	
libmyMath.so: $(OBJECTS_LIB)
	$(CC) -shared -o libmyMath.so $(OBJECTS_LIB)
libmyMath.a: $(OBJECTS_LIB)
	ar -rcs libmyMath.a $(OBJECTS_LIB)
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
main.o: main.c myMath.h
	$(CC) -c -o main.o main.c

clean:
	rm -f *.o *.a *.so