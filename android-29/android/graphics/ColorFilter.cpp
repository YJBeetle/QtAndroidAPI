#include "./ColorFilter.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	ColorFilter::ColorFilter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ColorFilter::ColorFilter()
		: JObject(
			"android.graphics.ColorFilter",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

