#include "./MaskFilter.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	MaskFilter::MaskFilter(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MaskFilter::MaskFilter()
		: __JniBaseClass(
			"android.graphics.MaskFilter",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

