#include "./Xfermode.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	Xfermode::Xfermode(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Xfermode::Xfermode()
		: JObject(
			"android.graphics.Xfermode",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

