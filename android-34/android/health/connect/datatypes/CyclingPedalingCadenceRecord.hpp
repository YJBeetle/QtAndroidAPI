#pragma once

#include "../../../../JObject.hpp"
#include "./CyclingPedalingCadenceRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean CyclingPedalingCadenceRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject CyclingPedalingCadenceRecord::getSamples() const
	{
		return callObjectMethod(
			"getSamples",
			"()Ljava/util/List;"
		);
	}
	inline jint CyclingPedalingCadenceRecord::hashCode() const
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
