#include "./StatsLog.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	StatsLog::StatsLog(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
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

