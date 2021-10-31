#include "./PaintFlagsDrawFilter.hpp"

namespace android::graphics
{
	// Fields
	
	PaintFlagsDrawFilter::PaintFlagsDrawFilter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PaintFlagsDrawFilter::PaintFlagsDrawFilter(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PaintFlagsDrawFilter",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::graphics

