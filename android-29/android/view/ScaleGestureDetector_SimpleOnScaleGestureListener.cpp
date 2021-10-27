#include "./ScaleGestureDetector.hpp"
#include "./ScaleGestureDetector_SimpleOnScaleGestureListener.hpp"

namespace android::view
{
	// Fields
	
	ScaleGestureDetector_SimpleOnScaleGestureListener::ScaleGestureDetector_SimpleOnScaleGestureListener(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ScaleGestureDetector_SimpleOnScaleGestureListener::ScaleGestureDetector_SimpleOnScaleGestureListener()
	{
		__thiz = QAndroidJniObject(
			"android.view.ScaleGestureDetector$SimpleOnScaleGestureListener",
			"()V"
		);
	}
	
	// Methods
	jboolean ScaleGestureDetector_SimpleOnScaleGestureListener::onScale(android::view::ScaleGestureDetector arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onScale",
			"(Landroid/view/ScaleGestureDetector;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ScaleGestureDetector_SimpleOnScaleGestureListener::onScaleBegin(android::view::ScaleGestureDetector arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onScaleBegin",
			"(Landroid/view/ScaleGestureDetector;)Z",
			arg0.__jniObject().object()
		);
	}
	void ScaleGestureDetector_SimpleOnScaleGestureListener::onScaleEnd(android::view::ScaleGestureDetector arg0)
	{
		__thiz.callMethod<void>(
			"onScaleEnd",
			"(Landroid/view/ScaleGestureDetector;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view

