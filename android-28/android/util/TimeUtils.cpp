#include "../../JString.hpp"
#include "../../java/util/TimeZone.hpp"
#include "./TimeUtils.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	
	// Methods
	java::util::TimeZone TimeUtils::getTimeZone(jint arg0, jboolean arg1, jlong arg2, JString arg3)
	{
		return callStaticObjectMethod(
			"android.util.TimeUtils",
			"getTimeZone",
			"(IZJLjava/lang/String;)Ljava/util/TimeZone;",
			arg0,
			arg1,
			arg2,
			arg3.object<jstring>()
		);
	}
	JString TimeUtils::getTimeZoneDatabaseVersion()
	{
		return callStaticObjectMethod(
			"android.util.TimeUtils",
			"getTimeZoneDatabaseVersion",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::util

