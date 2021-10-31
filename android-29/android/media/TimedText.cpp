#include "../graphics/Rect.hpp"
#include "../os/Parcel.hpp"
#include "./TimedText.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	TimedText::TimedText(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject TimedText::getBounds()
	{
		return callObjectMethod(
			"getBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	jstring TimedText::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media

