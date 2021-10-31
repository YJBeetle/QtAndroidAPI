#include "../content/Context.hpp"
#include "./OrientationListener.hpp"

namespace android::view
{
	// Fields
	jint OrientationListener::ORIENTATION_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.OrientationListener",
			"ORIENTATION_UNKNOWN"
		);
	}
	
	OrientationListener::OrientationListener(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	OrientationListener::OrientationListener(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.OrientationListener",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	OrientationListener::OrientationListener(android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.OrientationListener",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void OrientationListener::disable()
	{
		__thiz.callMethod<void>(
			"disable",
			"()V"
		);
	}
	void OrientationListener::enable()
	{
		__thiz.callMethod<void>(
			"enable",
			"()V"
		);
	}
	void OrientationListener::onAccuracyChanged(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onAccuracyChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	void OrientationListener::onOrientationChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onOrientationChanged",
			"(I)V",
			arg0
		);
	}
	void OrientationListener::onSensorChanged(jint arg0, jfloatArray arg1)
	{
		__thiz.callMethod<void>(
			"onSensorChanged",
			"(I[F)V",
			arg0,
			arg1
		);
	}
} // namespace android::view

