#pragma once

#include "./GpuHeadroomParams.def.hpp"
#include "./GpuHeadroomParams_Builder.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline GpuHeadroomParams_Builder::GpuHeadroomParams_Builder()
		: JObject(
			"android.os.GpuHeadroomParams$Builder",
			"()V"
		) {}
	inline GpuHeadroomParams_Builder::GpuHeadroomParams_Builder(android::os::GpuHeadroomParams arg0)
		: JObject(
			"android.os.GpuHeadroomParams$Builder",
			"(Landroid/os/GpuHeadroomParams;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::os::GpuHeadroomParams GpuHeadroomParams_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/os/GpuHeadroomParams;"
		);
	}
	inline android::os::GpuHeadroomParams_Builder GpuHeadroomParams_Builder::setCalculationType(jint arg0) const
	{
		return callObjectMethod(
			"setCalculationType",
			"(I)Landroid/os/GpuHeadroomParams$Builder;",
			arg0
		);
	}
	inline android::os::GpuHeadroomParams_Builder GpuHeadroomParams_Builder::setCalculationWindowMillis(jint arg0) const
	{
		return callObjectMethod(
			"setCalculationWindowMillis",
			"(I)Landroid/os/GpuHeadroomParams$Builder;",
			arg0
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
