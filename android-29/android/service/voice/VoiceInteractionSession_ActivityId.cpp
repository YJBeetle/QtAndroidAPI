#include "./VoiceInteractionSession_ActivityId.hpp"

namespace android::service::voice
{
	// Fields
	
	VoiceInteractionSession_ActivityId::VoiceInteractionSession_ActivityId(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean VoiceInteractionSession_ActivityId::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint VoiceInteractionSession_ActivityId::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::service::voice

