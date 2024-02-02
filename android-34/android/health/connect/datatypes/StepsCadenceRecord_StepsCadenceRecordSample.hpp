#pragma once

#include "../../../../JObject.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "./StepsCadenceRecord_StepsCadenceRecordSample.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline StepsCadenceRecord_StepsCadenceRecordSample::StepsCadenceRecord_StepsCadenceRecordSample(jdouble arg0, java::time::Instant arg1)
		: JObject(
			"android.health.connect.datatypes.StepsCadenceRecord$StepsCadenceRecordSample",
			"(DLjava/time/Instant;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline jboolean StepsCadenceRecord_StepsCadenceRecordSample::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jdouble StepsCadenceRecord_StepsCadenceRecordSample::getRate() const
	{
		return callMethod<jdouble>(
			"getRate",
			"()D"
		);
	}
	inline java::time::Instant StepsCadenceRecord_StepsCadenceRecordSample::getTime() const
	{
		return callObjectMethod(
			"getTime",
			"()Ljava/time/Instant;"
		);
	}
	inline jint StepsCadenceRecord_StepsCadenceRecordSample::hashCode() const
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
