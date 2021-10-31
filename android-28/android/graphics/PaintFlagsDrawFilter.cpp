#include "./PaintFlagsDrawFilter.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	PaintFlagsDrawFilter::PaintFlagsDrawFilter(QAndroidJniObject obj) : android::graphics::DrawFilter(obj) {}
	
	// Constructors
	PaintFlagsDrawFilter::PaintFlagsDrawFilter(jint arg0, jint arg1)
		: android::graphics::DrawFilter(
			"android.graphics.PaintFlagsDrawFilter",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::graphics

