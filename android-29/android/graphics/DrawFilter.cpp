#include "./DrawFilter.hpp"

namespace android::graphics
{
	// Fields
	
	DrawFilter::DrawFilter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DrawFilter::DrawFilter()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.DrawFilter",
			"()V"
		);
	}
	
	// Methods
} // namespace android::graphics

