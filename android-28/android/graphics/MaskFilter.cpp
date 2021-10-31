#include "./MaskFilter.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	MaskFilter::MaskFilter(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MaskFilter::MaskFilter()
		: __JniBaseClass(
			"android.graphics.MaskFilter",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

