/*
 * icons.h
 *
 *  Created on: 12 oct. 2015
 *      Author: furrtek
 */

#ifndef ICONS_H_
#define ICONS_H_

#include "LPC13xx.h"

const uint8_t icon_rec[2+(24*24)] = {
	24,24,
	0,0,0,0,0,0,0,0,0,48,48,48,48,48,48,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,48,48,48,48,48,48,48,48,48,48,0,0,0,0,0,0,0,
	0,0,0,0,0,0,48,48,48,48,48,48,48,48,48,48,48,48,0,0,0,0,0,0,
	0,0,0,0,0,48,48,48,48,48,48,48,48,48,48,48,48,48,48,0,0,0,0,0,
	0,0,0,0,0,48,48,48,48,48,48,48,48,48,48,48,48,48,48,0,0,0,0,0,
	0,0,0,0,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,0,0,0,0,
	0,0,0,0,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,0,0,0,0,
	0,0,0,0,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,0,0,0,0,
	0,0,0,0,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,0,0,0,0,
	0,0,0,0,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,0,0,0,0,
	0,0,0,0,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,0,0,0,0,
	0,0,0,0,0,48,48,48,48,48,48,48,48,48,48,48,48,48,48,0,0,0,0,0,
	0,0,0,0,0,48,48,48,48,48,48,48,48,48,48,48,48,48,48,0,0,0,0,0,
	0,0,0,0,0,0,48,48,48,48,48,48,48,48,48,48,48,48,0,0,0,0,0,0,
	0,0,0,0,0,0,0,48,48,48,48,48,48,48,48,48,48,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,48,48,48,48,48,48,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,48,48,48,48,48,0,0,48,48,48,48,48,48,0,0,48,48,48,48,48,0,0,
	0,0,48,48,0,0,48,48,0,48,48,0,0,0,0,0,48,48,0,0,0,0,0,0,
	0,0,48,48,0,0,48,48,0,48,48,0,0,0,0,0,48,48,0,0,0,0,0,0,
	0,0,48,48,0,0,48,48,0,48,48,48,48,0,0,0,48,48,0,0,0,0,0,0,
	0,0,48,48,48,48,48,0,0,48,48,0,0,0,0,0,48,48,0,0,0,0,0,0,
	0,0,48,48,0,48,48,0,0,48,48,0,0,0,0,0,48,48,0,0,0,0,0,0,
	0,0,48,48,0,0,48,48,0,48,48,48,48,48,48,0,0,48,48,48,48,48,0,0
};

const uint8_t icon_sdok[2+(16*16)] = {
	16,16,
	0,0,0,3,3,3,3,3,3,3,0,0,0,0,0,0,
	0,0,0,3,3,3,3,3,3,3,0,0,0,0,0,0,
	0,0,0,3,3,3,3,3,3,3,3,0,0,0,0,0,
	0,0,0,3,42,42,3,42,3,3,3,3,0,0,0,0,
	0,0,0,3,42,42,3,42,3,3,3,3,0,0,0,0,
	0,0,0,3,3,42,3,42,3,3,3,3,0,0,0,0,
	0,0,0,3,42,42,3,42,3,3,3,0,0,0,0,0,
	0,0,0,3,42,42,3,42,3,3,3,3,0,0,0,0,
	0,0,0,3,42,42,3,42,3,3,3,3,0,0,0,0,
	0,0,0,3,3,3,3,3,3,3,3,3,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,12,12,12,0,12,12,12,0,0,0,0,0,
	0,0,0,12,0,0,0,0,12,0,0,12,0,0,0,0,
	0,0,0,0,12,12,0,0,12,0,0,12,0,0,0,0,
	0,0,0,0,0,0,12,0,12,0,0,12,0,0,0,0,
	0,0,0,12,12,12,0,0,12,12,12,0,0,0,0,0
};

const uint8_t icon_sdnok[2+(16*16)] = {
	16,16,
	0,0,0,3,3,3,3,3,3,3,0,0,0,0,0,0,
	0,0,0,3,48,48,3,3,3,3,0,48,48,0,0,0,
	0,0,0,3,48,48,48,3,3,3,48,48,48,0,0,0,
	0,0,0,3,42,48,48,48,3,48,48,48,0,0,0,0,
	0,0,0,3,42,42,48,48,48,48,48,3,0,0,0,0,
	0,0,0,3,3,42,3,48,48,48,3,3,0,0,0,0,
	0,0,0,3,42,42,48,48,48,48,48,0,0,0,0,0,
	0,0,0,3,42,48,48,48,3,48,48,48,0,0,0,0,
	0,0,0,3,48,48,48,42,3,3,48,48,48,0,0,0,
	0,0,0,3,48,48,3,3,3,3,3,48,48,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,48,48,48,0,48,48,48,0,0,0,0,0,
	0,0,0,48,0,0,0,0,48,0,0,48,0,0,0,0,
	0,0,0,0,48,48,0,0,48,0,0,48,0,0,0,0,
	0,0,0,0,0,0,48,0,48,0,0,48,0,0,0,0,
	0,0,0,48,48,48,0,0,48,48,48,0,0,0,0,0
};

const uint8_t icon_camok[2+(16*16)] = {
	16,16,
	0,0,0,0,0,0,63,42,42,63,0,0,0,0,0,0,
	0,0,0,0,63,42,42,42,42,42,42,63,0,0,0,0,
	0,0,0,63,42,42,63,63,63,63,42,42,63,0,0,0,
	0,0,0,42,42,63,63,63,63,63,63,42,42,0,0,0,
	0,0,63,42,63,63,63,63,63,63,63,63,42,63,0,0,
	0,0,42,42,42,63,63,0,0,63,63,63,42,42,0,0,
	0,0,42,42,42,42,63,0,0,63,63,63,42,42,0,0,
	0,0,42,42,63,63,63,63,63,63,63,63,42,42,0,0,
	0,0,0,42,42,63,63,63,63,63,63,42,42,0,0,0,
	0,0,0,42,42,42,63,63,63,63,42,42,42,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,12,12,0,0,12,12,0,0,12,0,0,0,12,0,
	0,12,0,0,0,12,0,0,12,0,12,12,0,12,12,0,
	0,12,0,0,0,12,12,12,12,0,12,0,12,0,12,0,
	0,12,0,0,0,12,0,0,12,0,12,0,0,0,12,0,
	0,0,12,12,0,12,0,0,12,0,12,0,0,0,12,0
};

const uint8_t icon_camnok[2+(16*16)] = {
	16,16,
	0,0,0,0,0,0,63,42,42,63,0,0,0,0,0,0,
	0,0,0,0,48,48,42,42,42,42,48,48,0,0,0,0,
	0,0,0,63,48,48,48,63,63,48,48,48,63,0,0,0,
	0,0,0,42,42,48,48,48,48,48,48,42,42,0,0,0,
	0,0,63,42,63,63,48,48,48,48,63,63,42,63,0,0,
	0,0,42,42,42,63,48,48,48,48,63,63,42,42,0,0,
	0,0,42,42,42,48,48,48,48,48,48,63,42,42,0,0,
	0,0,42,42,48,48,48,63,63,48,48,48,42,42,0,0,
	0,0,0,42,48,48,63,63,63,63,48,48,42,0,0,0,
	0,0,0,42,42,42,63,63,63,63,42,42,42,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,48,48,0,0,48,48,0,0,48,0,0,0,48,0,
	0,48,0,0,0,48,0,0,48,0,48,48,0,48,48,0,
	0,48,0,0,0,48,48,48,48,0,48,0,48,0,48,0,
	0,48,0,0,0,48,0,0,48,0,48,0,0,0,48,0,
	0,0,48,48,0,48,0,0,48,0,48,0,0,0,48,0
};

#endif /* ICONS_H_ */
