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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSession_Request(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSession_Request(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void cancel();
		jstring getCallingPackage();
		jint getCallingUid();
		QAndroidJniObject getExtras();
		jboolean isActive();
		jstring toString();
	};
} // namespace android::service::voice

