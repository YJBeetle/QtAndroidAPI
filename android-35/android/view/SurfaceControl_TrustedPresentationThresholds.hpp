#pragma once

#include "./SurfaceControl_TrustedPresentationThresholds.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline SurfaceControl_TrustedPresentationThresholds::SurfaceControl_TrustedPresentationThresholds(jfloat arg0, jfloat arg1, jint arg2)
		: JObject(
			"android.view.SurfaceControl$TrustedPresentationThresholds",
			"(FFI)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
