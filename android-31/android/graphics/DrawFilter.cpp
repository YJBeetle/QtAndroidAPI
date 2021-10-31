#include "./DrawFilter.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	DrawFilter::DrawFilter(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DrawFilter::DrawFilter()
		: __JniBaseClass(
			"android.graphics.DrawFilter",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

