#ifndef PROGMEM_H
#define PROGMEM_H


#include <stdint.h>


int pstrncmp(const char *ram, const char *pmem, int);
int8_t pstrlen(const char *pmem);

int pgm_word(const void*);
void *pgm_ptr(const void*);
int8_t pgm_byte(const void*);

int8_t read_eeprom(const void*);
void write_eeprom(const void*, int8_t);

int8_t read_fuse(int addr);
int8_t read_sig(int addr);

#endif

