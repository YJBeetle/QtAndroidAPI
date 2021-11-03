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
	OrientationEventListener::OrientationEventListener(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	OrientationEventListener::OrientationEventListener(android::content::Context arg0)
		: JObject(
			"android.view.OrientationEventListener",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	OrientationEventListener::OrientationEventListener(android::content::Context arg0, jint arg1)
		: JObject(
			"android.view.OrientationEventListener",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jboolean OrientationEventListener::canDetectOrientation() const
	{
		return callMethod<jboolean>(
			"canDetectOrientation",
			"()Z"
		);
	}
	void OrientationEventListener::disable() const
	{
		callMethod<void>(
			"disable",
			"()V"
		);
	}
	void OrientationEventListener::enable() const
	{
		callMethod<void>(
			"enable",
			"()V"
		);
	}
	void OrientationEventListener::onOrientationChanged(jint arg0) const
	{
		callMethod<void>(
			"onOrientationChanged",
			"(I)V",
			arg0
		);
	}
} // namespace android::view

