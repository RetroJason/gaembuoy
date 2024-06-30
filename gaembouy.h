#ifndef GAEMBOUY_H
#define GAEMBOUY_H

#include "gb.h"

extern struct gb* gb_load(const char* rom, uint16_t* frame_buffer);
extern bool gb_update(struct gb* gb, int frames);
extern void gb_unload(struct gb* gb);
#endif
