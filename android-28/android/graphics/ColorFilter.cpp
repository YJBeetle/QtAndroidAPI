#include "./ColorFilter.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	ColorFilter::ColorFilter(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ColorFilter::ColorFilter()
		: __JniBaseClass(
			"android.graphics.ColorFilter",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

