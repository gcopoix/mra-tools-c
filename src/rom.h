#ifndef _PART_H_
#define _PART_H_

#include "utils.h"
#include "mra.h"

int write_rom0(t_mra *mra, t_string_list *dirs, char *rom_filename);
int write_nvram(t_mra *mra, t_string_list *dirs, char *ram_filename);

#endif