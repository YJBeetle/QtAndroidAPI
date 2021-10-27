#include "./PorterDuff.hpp"

namespace android::graphics
{
	// Fields
	
	PorterDuff::PorterDuff(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PorterDuff::PorterDuff()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PorterDuff",
			"()V"
		);
	}
	
	// Methods
} // namespace android::graphics

