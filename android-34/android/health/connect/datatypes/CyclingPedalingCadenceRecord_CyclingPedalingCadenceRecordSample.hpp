#pragma once

#include "../../../../JObject.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "./CyclingPedalingCadenceRecord_CyclingPedalingCadenceRecordSample.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline CyclingPedalingCadenceRecord_CyclingPedalingCadenceRecordSample::CyclingPedalingCadenceRecord_CyclingPedalingCadenceRecordSample(jdouble arg0, java::time::Instant arg1)
		: JObject(
			"android.health.connect.datatypes.CyclingPedalingCadenceRecord$CyclingPedalingCadenceRecordSample",
			"(DLjava/time/Instant;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline jboolean CyclingPedalingCadenceRecord_CyclingPedalingCadenceRecordSample::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jdouble CyclingPedalingCadenceRecord_CyclingPedalingCadenceRecordSample::getRevolutionsPerMinute() const
	{
		return callMethod<jdouble>(
			"getRevolutionsPerMinute",
			"()D"
		);
	}
	inline java::time::Instant CyclingPedalingCadenceRecord_CyclingPedalingCadenceRecordSample::getTime() const
	{
		return callObjectMethod(
			"getTime",
			"()Ljava/time/Instant;"
		);
	}
	inline jint CyclingPedalingCadenceRecord_CyclingPedalingCadenceRecordSample::hashCode() const
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
