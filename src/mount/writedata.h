/*
   Copyright 2005-2010 Jakub Kruszona-Zawadzki, Gemius SA, 2013 Skytechnology sp. z o.o..

   This file was part of MooseFS and is part of LizardFS.

   LizardFS is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, version 3.

   LizardFS is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with LizardFS  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <inttypes.h>

void write_data_init(uint32_t cachesize, uint32_t retries, uint32_t workers,
		uint32_t writewindowsize);
void write_data_term(void);
void* write_data_new(uint32_t inode);
int write_data_end(void *vid);
int write_data_flush(void *vid);
uint64_t write_data_getmaxfleng(uint32_t inode);
int write_data_flush_inode(uint32_t inode);
int write_data(void *vid, uint64_t offset, uint32_t size, const uint8_t *buff);
