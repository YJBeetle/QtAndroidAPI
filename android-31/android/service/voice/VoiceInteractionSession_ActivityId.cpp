#include "../../../JObject.hpp"
#include "./VoiceInteractionSession_ActivityId.hpp"

namespace android::service::voice
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean VoiceInteractionSession_ActivityId::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint VoiceInteractionSession_ActivityId::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::service::voice

