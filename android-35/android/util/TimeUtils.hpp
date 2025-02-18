#pragma once

#include "../../JString.hpp"
#include "../../java/time/LocalTime.def.hpp"
#include "../../java/util/TimeZone.def.hpp"
#include "./TimeUtils.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::util::TimeZone TimeUtils::getTimeZone(jint arg0, jboolean arg1, jlong arg2, JString arg3)
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
	inline JString TimeUtils::getTimeZoneDatabaseVersion()
	{
		return callStaticObjectMethod(
			"android.util.TimeUtils",
			"getTimeZoneDatabaseVersion",
			"()Ljava/lang/String;"
		);
	}
	inline JObject TimeUtils::getTimeZoneIdsForCountryCode(JString arg0)
	{
		return callStaticObjectMethod(
			"android.util.TimeUtils",
			"getTimeZoneIdsForCountryCode",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0.object<jstring>()
		);
	}
	inline jboolean TimeUtils::isTimeBetween(java::time::LocalTime arg0, java::time::LocalTime arg1, java::time::LocalTime arg2)
	{
		return callStaticMethod<jboolean>(
			"android.util.TimeUtils",
			"isTimeBetween",
			"(Ljava/time/LocalTime;Ljava/time/LocalTime;Ljava/time/LocalTime;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
