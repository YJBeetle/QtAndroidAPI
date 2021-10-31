#include "./VisualVoicemailService_VisualVoicemailTask.hpp"

namespace android::telephony
{
	// Fields
	
	// QJniObject forward
	VisualVoicemailService_VisualVoicemailTask::VisualVoicemailService_VisualVoicemailTask(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean VisualVoicemailService_VisualVoicemailTask::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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

