#include "gui/menu_item/auto_sampler/auto_sampler.h"

namespace menu_item::autosampler {

	AutoSampler autoSampler;
	int startNote;
	int endNote;
	int velocity;
	int interval;
	char const* instrumentName;

	void setVelocity(int vel) {
		velocity = vel;
	}
	void setEndNote(int note) {
		endNote = note;
	}

	void setStartNote(int note) {
		startNote = note;
	}

	void setInterval(int interval) {
		interval = interval;
	}

	void setInstrumentName(char const* name = "New Instrument") {
		instrumentName = name;
	}
	int getStartNote() {
		return startNote;
	}
	int getEndNote() {
		return endNote;
	}
	int getVelocity() {
		return velocity;
	}
	int getInterval() {
		return interval;
	}
	char const* getInstrumentName() {
		return instrumentName;
	}

	void start() {
		// Suspend all other processes...somehow

		// Get current midi channel
		// Check if low and high notes are valid. If not, set to default (C2 - C8)

		// Compute list of midi notes to send.

		// For each note in the list:
		// Begin recording on selected audio input
		// Send a note on message with the current velocity
		// Wait for note length
		// Send a note off message
		// End recording when audio monitor is silent
		// Save sample to SD card

		// Once all samples saved, create a new multisample instrument
		// with the samples and the given name
	}


} // namespace menu_item::autosampler
