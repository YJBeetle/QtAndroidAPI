#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./LogSessionId.hpp"

namespace android::media::metrics
{
	// Fields
	android::media::metrics::LogSessionId LogSessionId::LOG_SESSION_ID_NONE()
	{
		return getStaticObjectField(
			"android.media.metrics.LogSessionId",
			"LOG_SESSION_ID_NONE",
			"Landroid/media/metrics/LogSessionId;"
		);
	}
	
	// QJniObject forward
	LogSessionId::LogSessionId(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean LogSessionId::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString LogSessionId::getStringId()
	{
		return callObjectMethod(
			"getStringId",
			"()Ljava/lang/String;"
		);
	}
	jint LogSessionId::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString LogSessionId::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::metrics

