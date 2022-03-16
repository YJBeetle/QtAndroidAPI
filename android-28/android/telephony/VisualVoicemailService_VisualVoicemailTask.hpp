#pragma once

#include "../os/Messenger.def.hpp"
#include "../../JObject.hpp"
#include "./VisualVoicemailService_VisualVoicemailTask.def.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean VisualVoicemailService_VisualVoicemailTask::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void VisualVoicemailService_VisualVoicemailTask::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	inline jint VisualVoicemailService_VisualVoicemailTask::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::telephony

// Base class headers

