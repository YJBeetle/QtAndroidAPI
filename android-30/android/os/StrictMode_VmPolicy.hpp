#pragma once

#include "../../JString.hpp"
#include "./StrictMode_VmPolicy.def.hpp"

namespace android::os
{
	// Fields
	inline android::os::StrictMode_VmPolicy StrictMode_VmPolicy::LAX()
	{
		return getStaticObjectField(
			"android.os.StrictMode$VmPolicy",
			"LAX",
			"Landroid/os/StrictMode$VmPolicy;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString StrictMode_VmPolicy::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::os

// Base class headers

