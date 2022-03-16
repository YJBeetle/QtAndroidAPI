#pragma once

#include "../../../JObject.hpp"
#include "./VoiceInteractionSession_ActivityId.def.hpp"

namespace android::service::voice
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean VoiceInteractionSession_ActivityId::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint VoiceInteractionSession_ActivityId::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::service::voice

// Base class headers

