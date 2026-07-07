#pragma once

#include "../../JIntArray.hpp"
#include "./CpuHeadroomParams.def.hpp"
#include "./CpuHeadroomParams_Builder.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline CpuHeadroomParams_Builder::CpuHeadroomParams_Builder()
		: JObject(
			"android.os.CpuHeadroomParams$Builder",
			"()V"
		) {}
	inline CpuHeadroomParams_Builder::CpuHeadroomParams_Builder(android::os::CpuHeadroomParams arg0)
		: JObject(
			"android.os.CpuHeadroomParams$Builder",
			"(Landroid/os/CpuHeadroomParams;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::os::CpuHeadroomParams CpuHeadroomParams_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/os/CpuHeadroomParams;"
		);
	}
	inline android::os::CpuHeadroomParams_Builder CpuHeadroomParams_Builder::setCalculationType(jint arg0) const
	{
		return callObjectMethod(
			"setCalculationType",
			"(I)Landroid/os/CpuHeadroomParams$Builder;",
			arg0
		);
	}
	inline android::os::CpuHeadroomParams_Builder CpuHeadroomParams_Builder::setCalculationWindowMillis(jint arg0) const
	{
		return callObjectMethod(
			"setCalculationWindowMillis",
			"(I)Landroid/os/CpuHeadroomParams$Builder;",
			arg0
		);
	}
	inline android::os::CpuHeadroomParams_Builder CpuHeadroomParams_Builder::setTids(JIntArray arg0) const
	{
		return callObjectMethod(
			"setTids",
			"([I)Landroid/os/CpuHeadroomParams$Builder;",
			arg0.object<jintArray>()
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
