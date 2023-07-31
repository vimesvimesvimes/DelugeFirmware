/*
 * Copyright © 2018-2023 Synthstrom Audible Limited
 *
 * This file is part of The Synthstrom Audible Deluge Firmware.
 *
 * The Synthstrom Audible Deluge Firmware is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with this program.
 * If not, see <https://www.gnu.org/licenses/>.
*/

#include "gui/menu_item/selection.h"
#pragma once

namespace menu_item::autosampler {
class AutoSampler {
public:
	AutoSampler();
	// Get/set start (low) note. Default is C-2
	int getStartNote();
	void setStartNote(int note);

	// Get/set end (high) note. Default is C-8.
	// If set to C-2, only one note will be sampled.
	// If note + interval > end note, end note will be sampled instead.
	int getEndNote();
	void setEndNote(int note);

	// Get/set velocity of midi notes. Default is 100.
	int getVelocity();
	void setVelocity(int velocity);

	// Get/set instrument name. Default is "New Instrument".
	char const* getInstrumentName();
	void setInstrumentName(char const* name = "New Instrument");

	// Get/set interval between notes. Default is 12 (octave).
	int getInterval();
	void setInterval(int velocity);

	int getNoteLength();
	void setNoteLength(int noteLength);


private:
	// Starts the autosampler process. Called from the menu item.
	void start();
};

	extern AutoSampler autoSampler;


} // namespace menu_item::autosampler
