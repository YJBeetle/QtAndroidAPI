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
		
		// QJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSession_AssistState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSession_AssistState(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::service::voice::VoiceInteractionSession_ActivityId getActivityId() const;
		android::app::assist::AssistContent getAssistContent() const;
		android::os::Bundle getAssistData() const;
		android::app::assist::AssistStructure getAssistStructure() const;
		jint getCount() const;
		jint getIndex() const;
		jboolean isFocused() const;
	};
} // namespace android::service::voice

