CC=g++
CFLAGS=-g -pg
DEPS=boolen_bucket.h constant.h
OBJPL=toy.o bucket.o
OBJRA=random.o bucket.o
.PHONY:	all clean
all:	play random
play:	$(OBJPL)
	$(CC) $^ -o $@ $(CFLAGS) 
random:	$(OBJRA)
	$(CC) $^ -o $@ $(CFLAGS)
%.o:	%.cpp $(DEPS)
	$(CC) $< -o $@ -c $(CFLAGS)
clean:
	rm *.o