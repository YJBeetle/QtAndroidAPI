#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./GpuHeadroomParams.def.hpp"

namespace android::os
{
	// Fields
	inline jint GpuHeadroomParams::GPU_HEADROOM_CALCULATION_TYPE_AVERAGE()
	{
		return getStaticField<jint>(
			"android.os.GpuHeadroomParams",
			"GPU_HEADROOM_CALCULATION_TYPE_AVERAGE"
		);
	}
	inline jint GpuHeadroomParams::GPU_HEADROOM_CALCULATION_TYPE_MIN()
	{
		return getStaticField<jint>(
			"android.os.GpuHeadroomParams",
			"GPU_HEADROOM_CALCULATION_TYPE_MIN"
		);
	}
	inline jint GpuHeadroomParams::GPU_HEADROOM_CALCULATION_WINDOW_MILLIS_MAX()
	{
		return getStaticField<jint>(
			"android.os.GpuHeadroomParams",
			"GPU_HEADROOM_CALCULATION_WINDOW_MILLIS_MAX"
		);
	}
	inline jint GpuHeadroomParams::GPU_HEADROOM_CALCULATION_WINDOW_MILLIS_MIN()
	{
		return getStaticField<jint>(
			"android.os.GpuHeadroomParams",
			"GPU_HEADROOM_CALCULATION_WINDOW_MILLIS_MIN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean GpuHeadroomParams::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint GpuHeadroomParams::getCalculationType() const
	{
		return callMethod<jint>(
			"getCalculationType",
			"()I"
		);
	}
	inline jint GpuHeadroomParams::getCalculationWindowMillis() const
	{
		return callMethod<jint>(
			"getCalculationWindowMillis",
			"()I"
		);
	}
	inline jint GpuHeadroomParams::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString GpuHeadroomParams::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
