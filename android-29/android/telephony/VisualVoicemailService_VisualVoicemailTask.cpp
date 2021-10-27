#include "../os/Messenger.hpp"
#include "./VisualVoicemailService_VisualVoicemailTask.hpp"

namespace android::telephony
{
	// Fields
	
	VisualVoicemailService_VisualVoicemailTask::VisualVoicemailService_VisualVoicemailTask(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean VisualVoicemailService_VisualVoicemailTask::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void VisualVoicemailService_VisualVoicemailTask::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V"
		);
	}
	jint VisualVoicemailService_VisualVoicemailTask::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::telephony

