#include "../graphics/Rect.hpp"
#include "./MotionEvent.hpp"
#include "./View.hpp"
#include "./TouchDelegate.hpp"

namespace android::view
{
	// Fields
	jint TouchDelegate::ABOVE()
	{
		return getStaticField<jint>(
			"android.view.TouchDelegate",
			"ABOVE"
		);
	}
	jint TouchDelegate::BELOW()
	{
		return getStaticField<jint>(
			"android.view.TouchDelegate",
			"BELOW"
		);
	}
	jint TouchDelegate::TO_LEFT()
	{
		return getStaticField<jint>(
			"android.view.TouchDelegate",
			"TO_LEFT"
		);
	}
	jint TouchDelegate::TO_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.TouchDelegate",
			"TO_RIGHT"
		);
	}
	
	// QJniObject forward
	TouchDelegate::TouchDelegate(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TouchDelegate::TouchDelegate(android::graphics::Rect arg0, android::view::View arg1)
		: __JniBaseClass(
			"android.view.TouchDelegate",
			"(Landroid/graphics/Rect;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jboolean TouchDelegate::onTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
} // namespace android::view

