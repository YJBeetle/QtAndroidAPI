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
	
	// QAndroidJniObject forward
	OrientationListener::OrientationListener(QAndroidJniObject obj) : JObject(obj) {}
	
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
	void OrientationListener::disable()
	{
		callMethod<void>(
			"disable",
			"()V"
		);
	}
	void OrientationListener::enable()
	{
		callMethod<void>(
			"enable",
			"()V"
		);
	}
	void OrientationListener::onAccuracyChanged(jint arg0, jint arg1)
	{
		callMethod<void>(
			"onAccuracyChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	void OrientationListener::onOrientationChanged(jint arg0)
	{
		callMethod<void>(
			"onOrientationChanged",
			"(I)V",
			arg0
		);
	}
	void OrientationListener::onSensorChanged(jint arg0, JFloatArray arg1)
	{
		callMethod<void>(
			"onSensorChanged",
			"(I[F)V",
			arg0,
			arg1.object<jfloatArray>()
		);
	}
} // namespace android::view

