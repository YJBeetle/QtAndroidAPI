#pragma once

#include "../../JString.hpp"
#include "./StrictMode_ThreadPolicy.def.hpp"

namespace android::os
{
	// Fields
	inline android::os::StrictMode_ThreadPolicy StrictMode_ThreadPolicy::LAX()
	{
		return getStaticObjectField(
			"android.os.StrictMode$ThreadPolicy",
			"LAX",
			"Landroid/os/StrictMode$ThreadPolicy;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString StrictMode_ThreadPolicy::toString() const
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
