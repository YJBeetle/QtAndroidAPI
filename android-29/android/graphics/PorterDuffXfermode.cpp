#include "./PorterDuff_Mode.hpp"
#include "./PorterDuffXfermode.hpp"

namespace android::graphics
{
	// Fields
	
	PorterDuffXfermode::PorterDuffXfermode(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PorterDuffXfermode::PorterDuffXfermode(android::graphics::PorterDuff_Mode arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PorterDuffXfermode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
} // namespace android::graphics

