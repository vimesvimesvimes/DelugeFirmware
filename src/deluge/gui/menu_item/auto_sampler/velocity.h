#include "gui/menu_item/integer.h"
#include "gui/menu_item/auto_sampler/auto_sampler.h"
#include "gui/ui/sound_editor.h"

#pragma once

namespace menu_item::autosampler {
	class Velocity : public Integer {
		public:
				using Integer::Integer;
	void readCurrentValue() { soundEditor.currentValue = autoSampler.getVelocity(); }
	void writeCurrentValue() { autoSampler.setVelocity(soundEditor.currentValue); }
	int getMaxValue() const { return 127; }
};
} // namespace menu_item::autosampler
