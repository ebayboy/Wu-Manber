
CC = g++

CFLAGS=-Wall -O2

TARGET = main

SRCS := $(wildcard *.cc)  

OBJS := $(patsubst %cc, %o, $(SRCS))  

all: $(TARGET)  

$(TARGET): $(OBJS)  
	$(CC) $(CFLAGS) -o $@ $^

%.o:%.cc
	$(CC) $(CFLAGS) -c $<

clean:  
	rm -f *.o $(TARGET) 
