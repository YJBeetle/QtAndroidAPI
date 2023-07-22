#pragma once

#include "../../JFloatArray.hpp"
#include "../content/Context.def.hpp"
#include "./OrientationListener.def.hpp"

namespace android::view
{
	// Fields
	inline jint OrientationListener::ORIENTATION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.view.OrientationListener",
			"ORIENTATION_UNKNOWN"
		);
	}
	
	// Constructors
	inline OrientationListener::OrientationListener(android::content::Context arg0)
		: JObject(
			"android.view.OrientationListener",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline OrientationListener::OrientationListener(android::content::Context arg0, jint arg1)
		: JObject(
			"android.view.OrientationListener",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline void OrientationListener::disable() const
	{
		callMethod<void>(
			"disable",
			"()V"
		);
	}
	inline void OrientationListener::enable() const
	{
		callMethod<void>(
			"enable",
			"()V"
		);
	}
	inline void OrientationListener::onAccuracyChanged(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"onAccuracyChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void OrientationListener::onOrientationChanged(jint arg0) const
	{
		callMethod<void>(
			"onOrientationChanged",
			"(I)V",
			arg0
		);
	}
	inline void OrientationListener::onSensorChanged(jint arg0, JFloatArray arg1) const
	{
		callMethod<void>(
			"onSensorChanged",
			"(I[F)V",
			arg0,
			arg1.object<jfloatArray>()
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
