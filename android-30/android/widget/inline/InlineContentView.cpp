#include "../../view/SurfaceControl.hpp"
#include "./InlineContentView.hpp"

namespace android::widget::inline
{
	// Fields
	
	// QAndroidJniObject forward
	InlineContentView::InlineContentView(QAndroidJniObject obj) : android::view::ViewGroup(obj) {}
	
	// Constructors
	
	// Methods
	android::view::SurfaceControl InlineContentView::getSurfaceControl() const
	{
		return callObjectMethod(
			"getSurfaceControl",
			"()Landroid/view/SurfaceControl;"
		);
	}
	jboolean InlineContentView::isZOrderedOnTop() const
	{
		return callMethod<jboolean>(
			"isZOrderedOnTop",
			"()Z"
		);
	}
	void InlineContentView::onLayout(jboolean arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
	{
		callMethod<void>(
			"onLayout",
			"(ZIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void InlineContentView::setSurfaceControlCallback(JObject arg0) const
	{
		callMethod<void>(
			"setSurfaceControlCallback",
			"(Landroid/widget/inline/InlineContentView$SurfaceControlCallback;)V",
			arg0.object()
		);
	}
	jboolean InlineContentView::setZOrderedOnTop(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setZOrderedOnTop",
			"(Z)Z",
			arg0
		);
	}
} // namespace android::widget::inline

