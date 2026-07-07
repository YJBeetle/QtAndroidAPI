#pragma once

#include "../../../../JObject.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "./HeartRateRecord_HeartRateSample.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline HeartRateRecord_HeartRateSample::HeartRateRecord_HeartRateSample(jlong arg0, java::time::Instant arg1)
		: JObject(
			"android.health.connect.datatypes.HeartRateRecord$HeartRateSample",
			"(JLjava/time/Instant;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline jboolean HeartRateRecord_HeartRateSample::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong HeartRateRecord_HeartRateSample::getBeatsPerMinute() const
	{
		return callMethod<jlong>(
			"getBeatsPerMinute",
			"()J"
		);
	}
	inline java::time::Instant HeartRateRecord_HeartRateSample::getTime() const
	{
		return callObjectMethod(
			"getTime",
			"()Ljava/time/Instant;"
		);
	}
	inline jint HeartRateRecord_HeartRateSample::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
