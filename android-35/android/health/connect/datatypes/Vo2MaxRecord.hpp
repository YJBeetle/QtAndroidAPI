#pragma once

#include "../../../../JObject.hpp"
#include "./Vo2MaxRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean Vo2MaxRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Vo2MaxRecord::getMeasurementMethod() const
	{
		return callMethod<jint>(
			"getMeasurementMethod",
			"()I"
		);
	}
	inline jdouble Vo2MaxRecord::getVo2MillilitersPerMinuteKilogram() const
	{
		return callMethod<jdouble>(
			"getVo2MillilitersPerMinuteKilogram",
			"()D"
		);
	}
	inline jint Vo2MaxRecord::hashCode() const
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
