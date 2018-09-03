.SUFFIXES : .cpp .o 

OBJS = em.o stm.o sam.o item.o fsms.o event_item.o stock_item.o fsms_main.o
SRCS = em.cpp stm.cpp sam.cpp item.cpp fsms.cpp event_item.cpp stock_item.cpp fsms_main.cpp

CC = g++
CFLAGS = -g -c -std=c++11

all: $(OBJS)
	$(CC) -o fsms $(OBJS)

.cpp.o : 
	$(CC) $(CFLAGS) $<

clean: 
	rm -f $(OBJS) fsms
