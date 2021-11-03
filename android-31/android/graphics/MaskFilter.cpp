#include "./MaskFilter.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	MaskFilter::MaskFilter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MaskFilter::MaskFilter()
		: JObject(
			"android.graphics.MaskFilter",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

