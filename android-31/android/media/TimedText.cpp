#include "../graphics/Rect.hpp"
#include "./TimedText.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	TimedText::TimedText(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Rect TimedText::getBounds()
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

