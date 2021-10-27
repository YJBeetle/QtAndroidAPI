#include "../os/Looper.hpp"
#include "./Choreographer.hpp"

namespace android::view
{
	// Fields
	
	Choreographer::Choreographer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Choreographer::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.Choreographer",
			"getInstance",
			"()Landroid/view/Choreographer;"
		);
	}
	void Choreographer::postFrameCallback(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"postFrameCallback",
			"(Landroid/view/Choreographer$FrameCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void Choreographer::postFrameCallbackDelayed(__JniBaseClass arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"postFrameCallbackDelayed",
			"(Landroid/view/Choreographer$FrameCallback;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Choreographer::removeFrameCallback(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeFrameCallback",
			"(Landroid/view/Choreographer$FrameCallback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view

