#pragma once

#include "./MeasureUnit.def.hpp"
#include "../../../java/lang/Number.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Measure.def.hpp"

namespace android::icu::util
{
	// Fields
	
	// Constructors
	inline Measure::Measure(java::lang::Number arg0, android::icu::util::MeasureUnit arg1)
		: JObject(
			"android.icu.util.Measure",
			"(Ljava/lang/Number;Landroid/icu/util/MeasureUnit;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jboolean Measure::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::lang::Number Measure::getNumber() const
	{
		return callObjectMethod(
			"getNumber",
			"()Ljava/lang/Number;"
		);
	}
	inline android::icu::util::MeasureUnit Measure::getUnit() const
	{
		return callObjectMethod(
			"getUnit",
			"()Landroid/icu/util/MeasureUnit;"
		);
	}
	inline jint Measure::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Measure::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::util

// Base class headers

