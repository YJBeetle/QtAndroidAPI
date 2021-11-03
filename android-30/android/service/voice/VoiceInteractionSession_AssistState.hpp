#pragma once

#include "../../../JObject.hpp"

namespace android::app::assist
{
	class AssistContent;
}
namespace android::app::assist
{
	class AssistStructure;
}
namespace android::os
{
	class Bundle;
}
namespace android::service::voice
{
	class VoiceInteractionSession_ActivityId;
}

namespace android::service::voice
{
	class VoiceInteractionSession_AssistState : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSession_AssistState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSession_AssistState(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::service::voice::VoiceInteractionSession_ActivityId getActivityId();
		android::app::assist::AssistContent getAssistContent();
		android::os::Bundle getAssistData();
		android::app::assist::AssistStructure getAssistStructure();
		jint getCount();
		jint getIndex();
		jboolean isFocused();
	};
} // namespace android::service::voice

