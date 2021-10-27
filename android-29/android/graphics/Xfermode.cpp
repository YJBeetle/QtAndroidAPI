#include "./Xfermode.hpp"

namespace android::graphics
{
	// Fields
	
	Xfermode::Xfermode(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Xfermode::Xfermode()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Xfermode",
			"()V"
		);
	}
	
	// Methods
} // namespace android::graphics

