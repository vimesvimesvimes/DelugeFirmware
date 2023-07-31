#include "gui/menu_item/selection.h"
#pragma once
namespace menu_item::autosampler {
class StartNote : public Selection {
public:
	using Selection::Selection;

	char const** getOptions() override {
		static char const* options[] = {
		    "C-2", "C#-2", "D-2", "D#-2", "E-2", "F-2", "F#-2", "G-2", "G#-2", "A-2", "A#-2", "B-2",
		    "C-3", "C#-3", "D-3", "D#-3", "E-3", "F-3", "F#-3", "G-3", "G#-3", "A-3", "A#-3", "B-3",
		    "C-4", "C#-4", "D-4", "D#-4", "E-4", "F-4", "F#-4", "G-4", "G#-4", "A-4", "A#-4", "B-4",
		    "C-5", "C#-5", "D-5", "D#-5", "E-5", "F-5", "F#-5", "G-5", "G#-5", "A-5", "A#-5", "B-5",
		    "C-6", "C#-6", "D-6", "D#-6", "E-6", "F-6", "F#-6", "G-6", "G#-6", "A-6", "A#-6", "B-6",
		    "C-7", "C#-7", "D-7", "D#-7", "E-7", "F-7", "F#-7", "G-7", "G#-7", "A-7", "A#-7", "B-7",
		    "C-8", "C#-8", "D-8", "D#-8", "E-8", "F-8", "F#-8", "G-8", "G#-8", "A-8", "A#-8", "B-8",
			NULL
		};
		return options;
	}
};
} // namespace menu_item::autosampler
