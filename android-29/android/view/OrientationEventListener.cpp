#include "../content/Context.hpp"
#include "./OrientationEventListener.hpp"

namespace android::view
{
	// Fields
	jint OrientationEventListener::ORIENTATION_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.OrientationEventListener",
			"ORIENTATION_UNKNOWN"
		);
	}
	
	OrientationEventListener::OrientationEventListener(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	OrientationEventListener::OrientationEventListener(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.OrientationEventListener",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	OrientationEventListener::OrientationEventListener(android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.OrientationEventListener",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jboolean OrientationEventListener::canDetectOrientation()
	{
		return __thiz.callMethod<jboolean>(
			"canDetectOrientation",
			"()Z"
		);
	}
	void OrientationEventListener::disable()
	{
		__thiz.callMethod<void>(
			"disable",
			"()V"
		);
	}
	void OrientationEventListener::enable()
	{
		__thiz.callMethod<void>(
			"enable",
			"()V"
		);
	}
	void OrientationEventListener::onOrientationChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onOrientationChanged",
			"(I)V",
			arg0
		);
	}
} // namespace android::view

