#include "./MaskFilter.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	MaskFilter::MaskFilter(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MaskFilter::MaskFilter()
		: JObject(
			"android.graphics.MaskFilter",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

