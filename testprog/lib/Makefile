libc.a : libc.o
	i386-elf-ar rcs $@ $<

libc.o : libc.c
	i386-elf-gcc -c $< -o $@ -ffreestanding -g

clean:
	rm *.o *.a