#include "../os/Looper.hpp"
#include "./Choreographer.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	Choreographer::Choreographer(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::view::Choreographer Choreographer::getInstance()
	{
		return callStaticObjectMethod(
			"android.view.Choreographer",
			"getInstance",
			"()Landroid/view/Choreographer;"
		);
	}
	void Choreographer::postFrameCallback(JObject arg0) const
	{
		callMethod<void>(
			"postFrameCallback",
			"(Landroid/view/Choreographer$FrameCallback;)V",
			arg0.object()
		);
	}
	void Choreographer::postFrameCallbackDelayed(JObject arg0, jlong arg1) const
	{
		callMethod<void>(
			"postFrameCallbackDelayed",
			"(Landroid/view/Choreographer$FrameCallback;J)V",
			arg0.object(),
			arg1
		);
	}
	void Choreographer::removeFrameCallback(JObject arg0) const
	{
		callMethod<void>(
			"removeFrameCallback",
			"(Landroid/view/Choreographer$FrameCallback;)V",
			arg0.object()
		);
	}
} // namespace android::view

