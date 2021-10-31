#include "./ColorFilter.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	ColorFilter::ColorFilter(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ColorFilter::ColorFilter()
		: __JniBaseClass(
			"android.graphics.ColorFilter",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

