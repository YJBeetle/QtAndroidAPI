#pragma once

#include "./SurfaceControl_OnJankDataListenerRegistration.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void SurfaceControl_OnJankDataListenerRegistration::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline void SurfaceControl_OnJankDataListenerRegistration::removeAfter(jlong arg0) const
	{
		callMethod<void>(
			"removeAfter",
			"(J)V",
			arg0
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
