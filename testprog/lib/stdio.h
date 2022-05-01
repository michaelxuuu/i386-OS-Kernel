#ifndef STDIO_H
#define STDIO_H

#include"stdarg.h"

#include"stdint.h"

#define DIRENT_ATTRIB_USED 0x1
#define DIRENT_ATTRIB_USER 0x2
#define DIRENT_ATTRIB_DIR 0x4
#define DIRENT_ATTRIB_DEVICE 0x8

typedef struct dirent
{

    uint8_t name[19];
    uint8_t attrib;
    uint32_t blockno;
    uint32_t size;
    uint32_t EOF;
} __attribute__((packed)) dirent;

void putchar(char c);

void puts(const char *s);

void printf(const char *fmt, ...);

void fopen(char *path, uint32_t attrib, dirent* p);

int read_kbd_buf();

void get_cur_dir(dirent *d);

void readdir(dirent *dir_to_read, dirent *dir_to_write, int index);

void cursor_left(int i);

void cursor_right(int i);

void cursor_up(int i);

void cursor_down(int i);

void cursor_backspace(int i);

extern void clear_screen();

extern int make_dir(char *name);

extern int change_dir(char *name);

#endif