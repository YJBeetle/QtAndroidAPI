#include "./ColorFilter.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	ColorFilter::ColorFilter(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ColorFilter::ColorFilter()
		: JObject(
			"android.graphics.ColorFilter",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

