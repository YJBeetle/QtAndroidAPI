#pragma once

#include "../../../../JObject.hpp"
#include "./MenstruationPeriodRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean MenstruationPeriodRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint MenstruationPeriodRecord::hashCode() const
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
