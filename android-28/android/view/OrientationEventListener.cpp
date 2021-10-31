#include "../content/Context.hpp"
#include "./OrientationEventListener.hpp"

namespace android::view
{
	// Fields
	jint OrientationEventListener::ORIENTATION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.view.OrientationEventListener",
			"ORIENTATION_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	OrientationEventListener::OrientationEventListener(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	OrientationEventListener::OrientationEventListener(android::content::Context arg0)
		: __JniBaseClass(
			"android.view.OrientationEventListener",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	OrientationEventListener::OrientationEventListener(android::content::Context arg0, jint arg1)
		: __JniBaseClass(
			"android.view.OrientationEventListener",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jboolean OrientationEventListener::canDetectOrientation()
	{
		return callMethod<jboolean>(
			"canDetectOrientation",
			"()Z"
		);
	}
	void OrientationEventListener::disable()
	{
		callMethod<void>(
			"disable",
			"()V"
		);
	}
	void OrientationEventListener::enable()
	{
		callMethod<void>(
			"enable",
			"()V"
		);
	}
	void OrientationEventListener::onOrientationChanged(jint arg0)
	{
		callMethod<void>(
			"onOrientationChanged",
			"(I)V",
			arg0
		);
	}
} // namespace android::view

