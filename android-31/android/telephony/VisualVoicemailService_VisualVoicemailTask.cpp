#include "../../JObject.hpp"
#include "./VisualVoicemailService_VisualVoicemailTask.hpp"

namespace android::telephony
{
	// Fields
	
	// QAndroidJniObject forward
	VisualVoicemailService_VisualVoicemailTask::VisualVoicemailService_VisualVoicemailTask(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean VisualVoicemailService_VisualVoicemailTask::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void VisualVoicemailService_VisualVoicemailTask::finish()
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	jint VisualVoicemailService_VisualVoicemailTask::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::telephony

