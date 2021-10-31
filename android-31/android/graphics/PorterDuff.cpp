#include "./PorterDuff.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	PorterDuff::PorterDuff(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PorterDuff::PorterDuff()
		: __JniBaseClass(
			"android.graphics.PorterDuff",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

