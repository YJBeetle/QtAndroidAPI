#include "./ScaleGestureDetector.hpp"
#include "./ScaleGestureDetector_SimpleOnScaleGestureListener.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	ScaleGestureDetector_SimpleOnScaleGestureListener::ScaleGestureDetector_SimpleOnScaleGestureListener(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ScaleGestureDetector_SimpleOnScaleGestureListener::ScaleGestureDetector_SimpleOnScaleGestureListener()
		: JObject(
			"android.view.ScaleGestureDetector$SimpleOnScaleGestureListener",
			"()V"
		) {}
	
	// Methods
	jboolean ScaleGestureDetector_SimpleOnScaleGestureListener::onScale(android::view::ScaleGestureDetector arg0) const
	{
		return callMethod<jboolean>(
			"onScale",
			"(Landroid/view/ScaleGestureDetector;)Z",
			arg0.object()
		);
	}
	jboolean ScaleGestureDetector_SimpleOnScaleGestureListener::onScaleBegin(android::view::ScaleGestureDetector arg0) const
	{
		return callMethod<jboolean>(
			"onScaleBegin",
			"(Landroid/view/ScaleGestureDetector;)Z",
			arg0.object()
		);
	}
	void ScaleGestureDetector_SimpleOnScaleGestureListener::onScaleEnd(android::view::ScaleGestureDetector arg0) const
	{
		callMethod<void>(
			"onScaleEnd",
			"(Landroid/view/ScaleGestureDetector;)V",
			arg0.object()
		);
	}
} // namespace android::view

