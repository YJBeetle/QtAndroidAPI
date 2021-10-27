#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::service::voice
{
	class VoiceInteractionSession_ActivityId : public __JniBaseClass
	{
	public:
		// Fields
		
		VoiceInteractionSession_ActivityId(QAndroidJniObject obj);
		// Constructors
		VoiceInteractionSession_ActivityId() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::service::voice

