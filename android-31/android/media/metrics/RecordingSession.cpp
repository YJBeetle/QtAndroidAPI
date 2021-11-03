#include "./LogSessionId.hpp"
#include "../../../JObject.hpp"
#include "./RecordingSession.hpp"

namespace android::media::metrics
{
	// Fields
	
	// QJniObject forward
	RecordingSession::RecordingSession(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void RecordingSession::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean RecordingSession::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
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

