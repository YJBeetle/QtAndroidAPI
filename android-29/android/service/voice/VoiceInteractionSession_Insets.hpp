#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::graphics
{
	class Region;
}

namespace android::service::voice
{
	class VoiceInteractionSession_Insets : public __JniBaseClass
	{
	public:
		// Fields
		static jint TOUCHABLE_INSETS_CONTENT();
		static jint TOUCHABLE_INSETS_FRAME();
		static jint TOUCHABLE_INSETS_REGION();
		QAndroidJniObject contentInsets();
		jint touchableInsets();
		QAndroidJniObject touchableRegion();
		
		VoiceInteractionSession_Insets(QAndroidJniObject obj);
		// Constructors
		VoiceInteractionSession_Insets();
		
		// Methods
	};
} // namespace android::service::voice

