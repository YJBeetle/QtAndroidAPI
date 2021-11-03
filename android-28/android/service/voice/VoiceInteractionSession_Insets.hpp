#pragma once

#include "../../../JObject.hpp"

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
	class VoiceInteractionSession_Insets : public JObject
	{
	public:
		// Fields
		static jint TOUCHABLE_INSETS_CONTENT();
		static jint TOUCHABLE_INSETS_FRAME();
		static jint TOUCHABLE_INSETS_REGION();
		android::graphics::Rect contentInsets();
		jint touchableInsets();
		android::graphics::Region touchableRegion();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSession_Insets(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSession_Insets(QAndroidJniObject obj);
		
		// Constructors
		VoiceInteractionSession_Insets();
		
		// Methods
	};
} // namespace android::service::voice

