#include "./DrawFilter.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	DrawFilter::DrawFilter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DrawFilter::DrawFilter()
		: JObject(
			"android.graphics.DrawFilter",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

