#include "../../JLongArray.hpp"
#include "../../JString.hpp"
#include "./StatsLog.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	StatsLog::StatsLog(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean StatsLog::logBinaryPushStateChanged(JString arg0, jlong arg1, jint arg2, jint arg3, JLongArray arg4)
	{
		return callStaticMethod<jboolean>(
			"android.util.StatsLog",
			"logBinaryPushStateChanged",
			"(Ljava/lang/String;JII[J)Z",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4.object<jlongArray>()
		);
	}
	jboolean StatsLog::logEvent(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.util.StatsLog",
			"logEvent",
			"(I)Z",
			arg0
		);
	}
	jboolean StatsLog::logStart(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.util.StatsLog",
			"logStart",
			"(I)Z",
			arg0
		);
	}
	jboolean StatsLog::logStop(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.util.StatsLog",
			"logStop",
			"(I)Z",
			arg0
		);
	}
} // namespace android::util

