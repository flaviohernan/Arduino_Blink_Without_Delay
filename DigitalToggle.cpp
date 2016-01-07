/*
 * DigitalToggle.h - A simple lightweight pin toggle utility library
 * v0.1 - 2009-July-6
 * Copyright (c) 2009 David Knaack.  All right reserved.
 *
 * DigitalToggle.h - A simple lightweight pin toggle utility library
 * v0.2 - 2016-Jan-6
 * Copyright (c) 2016 Flavio Hernan F. Nunes.  All right reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include "DigitalToggle.h"

// Store the last millis callback 
// think other manner to store this values

unsigned long DigitalToggle_H_MillisOldVect[NUM_DIGITAL_PINS - NUM_ANALOG_INPUTS];

void digitalToggle(uint8_t P)
{
  *portInputRegister(digitalPinToPort(P)) = digitalPinToBitMask(P);
}

void digitalToggleDelay(unsigned long D, uint8_t P)
{

	if (millis() - DigitalToggle_H_MillisOldVect[P] >= D)
	{
		digitalToggle(P);

		DigitalToggle_H_MillisOldVect[P] = millis();
	}	
}