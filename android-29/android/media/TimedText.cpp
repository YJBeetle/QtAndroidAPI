#include "../graphics/Rect.hpp"
#include "../os/Parcel.hpp"
#include "./TimedText.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	TimedText::TimedText(QJniObject obj) : __JniBaseClass(obj) {}
	
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

