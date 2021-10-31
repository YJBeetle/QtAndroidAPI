#include "../os/Looper.hpp"
#include "./Choreographer.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	Choreographer::Choreographer(QJniObject obj) : __JniBaseClass(obj) {}
	
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
	void Choreographer::postFrameCallback(__JniBaseClass arg0)
	{
		callMethod<void>(
			"postFrameCallback",
			"(Landroid/view/Choreographer$FrameCallback;)V",
			arg0.object()
		);
	}
	void Choreographer::postFrameCallbackDelayed(__JniBaseClass arg0, jlong arg1)
	{
		callMethod<void>(
			"postFrameCallbackDelayed",
			"(Landroid/view/Choreographer$FrameCallback;J)V",
			arg0.object(),
			arg1
		);
	}
	void Choreographer::removeFrameCallback(__JniBaseClass arg0)
	{
		callMethod<void>(
			"removeFrameCallback",
			"(Landroid/view/Choreographer$FrameCallback;)V",
			arg0.object()
		);
	}
} // namespace android::view

