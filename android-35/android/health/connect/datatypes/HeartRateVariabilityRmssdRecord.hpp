#pragma once

#include "../../../../JObject.hpp"
#include "./HeartRateVariabilityRmssdRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean HeartRateVariabilityRmssdRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jdouble HeartRateVariabilityRmssdRecord::getHeartRateVariabilityMillis() const
	{
		return callMethod<jdouble>(
			"getHeartRateVariabilityMillis",
			"()D"
		);
	}
	inline jint HeartRateVariabilityRmssdRecord::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers
#include "./Record.hpp"
#include "./InstantRecord.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
