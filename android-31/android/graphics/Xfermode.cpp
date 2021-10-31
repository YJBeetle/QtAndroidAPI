#include "./Xfermode.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	Xfermode::Xfermode(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Xfermode::Xfermode()
		: __JniBaseClass(
			"android.graphics.Xfermode",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

