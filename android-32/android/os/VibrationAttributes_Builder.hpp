#pragma once

#include "./VibrationAttributes.def.hpp"
#include "./VibrationAttributes_Builder.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline VibrationAttributes_Builder::VibrationAttributes_Builder()
		: JObject(
			"android.os.VibrationAttributes$Builder",
			"()V"
		) {}
	inline VibrationAttributes_Builder::VibrationAttributes_Builder(android::os::VibrationAttributes arg0)
		: JObject(
			"android.os.VibrationAttributes$Builder",
			"(Landroid/os/VibrationAttributes;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::os::VibrationAttributes VibrationAttributes_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/os/VibrationAttributes;"
		);
	}
	inline android::os::VibrationAttributes_Builder VibrationAttributes_Builder::setFlags(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setFlags",
			"(II)Landroid/os/VibrationAttributes$Builder;",
			arg0,
			arg1
		);
	}
	inline android::os::VibrationAttributes_Builder VibrationAttributes_Builder::setUsage(jint arg0) const
	{
		return callObjectMethod(
			"setUsage",
			"(I)Landroid/os/VibrationAttributes$Builder;",
			arg0
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
