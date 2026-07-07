#pragma once

#include "../../JIntArray.hpp"
#include "./CpuHeadroomParams_Builder.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CpuHeadroomParams.def.hpp"

namespace android::os
{
	// Fields
	inline jint CpuHeadroomParams::CPU_HEADROOM_CALCULATION_TYPE_AVERAGE()
	{
		return getStaticField<jint>(
			"android.os.CpuHeadroomParams",
			"CPU_HEADROOM_CALCULATION_TYPE_AVERAGE"
		);
	}
	inline jint CpuHeadroomParams::CPU_HEADROOM_CALCULATION_TYPE_MIN()
	{
		return getStaticField<jint>(
			"android.os.CpuHeadroomParams",
			"CPU_HEADROOM_CALCULATION_TYPE_MIN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean CpuHeadroomParams::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint CpuHeadroomParams::getCalculationType() const
	{
		return callMethod<jint>(
			"getCalculationType",
			"()I"
		);
	}
	inline jlong CpuHeadroomParams::getCalculationWindowMillis() const
	{
		return callMethod<jlong>(
			"getCalculationWindowMillis",
			"()J"
		);
	}
	inline JIntArray CpuHeadroomParams::getTids() const
	{
		return callObjectMethod(
			"getTids",
			"()[I"
		);
	}
	inline jint CpuHeadroomParams::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline android::os::CpuHeadroomParams_Builder CpuHeadroomParams::toBuilder() const
	{
		return callObjectMethod(
			"toBuilder",
			"()Landroid/os/CpuHeadroomParams$Builder;"
		);
	}
	inline JString CpuHeadroomParams::toString() const
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
