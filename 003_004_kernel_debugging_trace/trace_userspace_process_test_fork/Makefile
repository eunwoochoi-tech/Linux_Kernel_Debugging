CC=gcc
FLAGS=-g -o
TARGET=raspbian_fork
OBJS=raspbian_test_fork.o

$(TARGET): $(OBJS)
	$(CC) $(FLAGS) $(TARGET) $(OBJS)

%.o: %.c
	$(CC) -c $<
