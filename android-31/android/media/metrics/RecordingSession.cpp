#include "./LogSessionId.hpp"
#include "./RecordingSession.hpp"

namespace android::media::metrics
{
	// Fields
	
	// QAndroidJniObject forward
	RecordingSession::RecordingSession(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void RecordingSession::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean RecordingSession::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::media::metrics::LogSessionId RecordingSession::getSessionId()
	{
		return callObjectMethod(
			"getSessionId",
			"()Landroid/media/metrics/LogSessionId;"
		);
	}
	jint RecordingSession::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::media::metrics

