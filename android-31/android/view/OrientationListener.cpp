#include "../../JFloatArray.hpp"
#include "../content/Context.hpp"
#include "./OrientationListener.hpp"

namespace android::view
{
	// Fields
	jint OrientationListener::ORIENTATION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.view.OrientationListener",
			"ORIENTATION_UNKNOWN"
		);
	}
	
	// Constructors
	OrientationListener::OrientationListener(android::content::Context arg0)
		: JObject(
			"android.view.OrientationListener",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	OrientationListener::OrientationListener(android::content::Context arg0, jint arg1)
		: JObject(
			"android.view.OrientationListener",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void OrientationListener::disable() const
	{
		callMethod<void>(
			"disable",
			"()V"
		);
	}
	void OrientationListener::enable() const
	{
		callMethod<void>(
			"enable",
			"()V"
		);
	}
	void OrientationListener::onAccuracyChanged(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"onAccuracyChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	void OrientationListener::onOrientationChanged(jint arg0) const
	{
		callMethod<void>(
			"onOrientationChanged",
			"(I)V",
			arg0
		);
	}
	void OrientationListener::onSensorChanged(jint arg0, JFloatArray arg1) const
	{
		callMethod<void>(
			"onSensorChanged",
			"(I[F)V",
			arg0,
			arg1.object<jfloatArray>()
		);
	}
} // namespace android::view

