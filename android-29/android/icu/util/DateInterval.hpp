#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./DateInterval.def.hpp"

namespace android::icu::util
{
	// Fields
	
	// Constructors
	inline DateInterval::DateInterval(jlong arg0, jlong arg1)
		: JObject(
			"android.icu.util.DateInterval",
			"(JJ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jboolean DateInterval::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong DateInterval::getFromDate() const
	{
		return callMethod<jlong>(
			"getFromDate",
			"()J"
		);
	}
	inline jlong DateInterval::getToDate() const
	{
		return callMethod<jlong>(
			"getToDate",
			"()J"
		);
	}
	inline jint DateInterval::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString DateInterval::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::util

// Base class headers

