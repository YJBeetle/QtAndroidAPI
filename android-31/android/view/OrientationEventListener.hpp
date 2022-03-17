#pragma once

#include "../content/Context.def.hpp"
#include "./OrientationEventListener.def.hpp"

namespace android::view
{
	// Fields
	inline jint OrientationEventListener::ORIENTATION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.view.OrientationEventListener",
			"ORIENTATION_UNKNOWN"
		);
	}
	
	// Constructors
	inline OrientationEventListener::OrientationEventListener(android::content::Context arg0)
		: JObject(
			"android.view.OrientationEventListener",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline OrientationEventListener::OrientationEventListener(android::content::Context arg0, jint arg1)
		: JObject(
			"android.view.OrientationEventListener",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jboolean OrientationEventListener::canDetectOrientation() const
	{
		return callMethod<jboolean>(
			"canDetectOrientation",
			"()Z"
		);
	}
	inline void OrientationEventListener::disable() const
	{
		callMethod<void>(
			"disable",
			"()V"
		);
	}
	inline void OrientationEventListener::enable() const
	{
		callMethod<void>(
			"enable",
			"()V"
		);
	}
	inline void OrientationEventListener::onOrientationChanged(jint arg0) const
	{
		callMethod<void>(
			"onOrientationChanged",
			"(I)V",
			arg0
		);
	}
} // namespace android::view

// Base class headers

