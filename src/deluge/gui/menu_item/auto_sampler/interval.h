#include "gui/menu_item/selection.h"
#pragma once
namespace menu_item::autosampler {
	class Interval : public Selection {
		public:
			using Selection::Selection;
			char const** getOptions() override {
				static char const* options[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", NULL};
				return options;
			}
};
} // namespace menu_item::autosampler
