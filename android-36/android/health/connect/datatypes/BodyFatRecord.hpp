#pragma once

#include "./units/Percentage.def.hpp"
#include "../../../../JObject.hpp"
#include "./BodyFatRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean BodyFatRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::units::Percentage BodyFatRecord::getPercentage() const
	{
		return callObjectMethod(
			"getPercentage",
			"()Landroid/health/connect/datatypes/units/Percentage;"
		);
	}
	inline jint BodyFatRecord::hashCode() const
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
