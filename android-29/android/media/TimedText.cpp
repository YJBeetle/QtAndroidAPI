#include "../graphics/Rect.hpp"
#include "../os/Parcel.hpp"
#include "./TimedText.hpp"

namespace android::media
{
	// Fields
	
	TimedText::TimedText(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject TimedText::getBounds()
	{
		return __thiz.callObjectMethod(
			"getBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	jstring TimedText::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media

