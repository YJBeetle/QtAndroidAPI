#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Calendar_WeekData.def.hpp"

namespace android::icu::util
{
	// Fields
	inline jint Calendar_WeekData::firstDayOfWeek()
	{
		return getField<jint>(
			"firstDayOfWeek"
		);
	}
	inline jint Calendar_WeekData::minimalDaysInFirstWeek()
	{
		return getField<jint>(
			"minimalDaysInFirstWeek"
		);
	}
	inline jint Calendar_WeekData::weekendCease()
	{
		return getField<jint>(
			"weekendCease"
		);
	}
	inline jint Calendar_WeekData::weekendCeaseMillis()
	{
		return getField<jint>(
			"weekendCeaseMillis"
		);
	}
	inline jint Calendar_WeekData::weekendOnset()
	{
		return getField<jint>(
			"weekendOnset"
		);
	}
	inline jint Calendar_WeekData::weekendOnsetMillis()
	{
		return getField<jint>(
			"weekendOnsetMillis"
		);
	}
	
	// Constructors
	inline Calendar_WeekData::Calendar_WeekData(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: JObject(
			"android.icu.util.Calendar$WeekData",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	inline jboolean Calendar_WeekData::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Calendar_WeekData::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Calendar_WeekData::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::util

// Base class headers

