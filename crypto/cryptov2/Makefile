CC=g++
ASM=nasm
TARGETS=start
OBJS = main.o test.o #a.o는 start의 오브젝트 파일, b.o는 어셈블리 파일의 오브젝트 파일

$(TARGETS): $(OBJS)
	$(CC) -no-pie -o $@ $(OBJS)

test.o : test.asm
	$(ASM) -felf64 test.asm

main.o : main.cc
	$(CC) -no-pie -c main.cc

clean:
	rm -f *.o