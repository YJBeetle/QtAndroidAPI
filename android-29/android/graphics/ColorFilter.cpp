#include "./ColorFilter.hpp"

namespace android::graphics
{
	// Fields
	
	ColorFilter::ColorFilter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ColorFilter::ColorFilter()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorFilter",
			"()V"
		);
	}
	
	// Methods
} // namespace android::graphics

