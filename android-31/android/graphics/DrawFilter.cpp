#include "./DrawFilter.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	DrawFilter::DrawFilter(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DrawFilter::DrawFilter()
		: JObject(
			"android.graphics.DrawFilter",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

