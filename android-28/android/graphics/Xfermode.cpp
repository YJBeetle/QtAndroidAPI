#include "./Xfermode.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	Xfermode::Xfermode(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Xfermode::Xfermode()
		: __JniBaseClass(
			"android.graphics.Xfermode",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

