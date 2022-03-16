#include "../os/Messenger.hpp"
#include "../../JObject.hpp"
#include "./VisualVoicemailService_VisualVoicemailTask.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean VisualVoicemailService_VisualVoicemailTask::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void VisualVoicemailService_VisualVoicemailTask::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	jint VisualVoicemailService_VisualVoicemailTask::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::telephony

