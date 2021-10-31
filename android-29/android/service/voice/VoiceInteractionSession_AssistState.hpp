#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class VoiceInteractionSession_AssistState : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSession_AssistState(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSession_AssistState(QJniObject obj);
		
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

