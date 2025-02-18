#pragma once

#include "./AggregationType.def.hpp"
#include "../../../../JString.hpp"
#include "../../../../JObject.hpp"
#include "./SleepSessionRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::AggregationType SleepSessionRecord::SLEEP_DURATION_TOTAL()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.SleepSessionRecord",
			"SLEEP_DURATION_TOTAL",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean SleepSessionRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString SleepSessionRecord::getNotes() const
	{
		return callObjectMethod(
			"getNotes",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JObject SleepSessionRecord::getStages() const
	{
		return callObjectMethod(
			"getStages",
			"()Ljava/util/List;"
		);
	}
	inline JString SleepSessionRecord::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint SleepSessionRecord::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers
#include "./Record.hpp"
#include "./IntervalRecord.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
