#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}

namespace android::service::voice
{
	class VoiceInteractionSession_Request : public __JniBaseClass
	{
	public:
		// Fields
		
		VoiceInteractionSession_Request(QAndroidJniObject obj);
		// Constructors
		VoiceInteractionSession_Request() = default;
		
		// Methods
		void cancel();
		jstring getCallingPackage();
		jint getCallingUid();
		QAndroidJniObject getExtras();
		jboolean isActive();
		jstring toString();
	};
} // namespace android::service::voice

