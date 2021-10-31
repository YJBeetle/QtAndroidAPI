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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSession_AssistState(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSession_AssistState(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject getActivityId();
		QAndroidJniObject getAssistContent();
		QAndroidJniObject getAssistData();
		QAndroidJniObject getAssistStructure();
		jint getCount();
		jint getIndex();
		jboolean isFocused();
	};
} // namespace android::service::voice

