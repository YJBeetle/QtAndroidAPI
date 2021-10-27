#include "./MaskFilter.hpp"

namespace android::graphics
{
	// Fields
	
	MaskFilter::MaskFilter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MaskFilter::MaskFilter()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.MaskFilter",
			"()V"
		);
	}
	
	// Methods
} // namespace android::graphics

