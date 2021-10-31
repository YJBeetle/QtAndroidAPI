#include "./DrawFilter.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	DrawFilter::DrawFilter(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DrawFilter::DrawFilter()
		: __JniBaseClass(
			"android.graphics.DrawFilter",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

