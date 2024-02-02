#pragma once

#include "./units/Mass.def.hpp"
#include "../../../../JObject.hpp"
#include "./BodyWaterMassRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean BodyWaterMassRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::units::Mass BodyWaterMassRecord::getBodyWaterMass() const
	{
		return callObjectMethod(
			"getBodyWaterMass",
			"()Landroid/health/connect/datatypes/units/Mass;"
		);
	}
	inline jint BodyWaterMassRecord::hashCode() const
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
