#include "../graphics/Rect.hpp"
#include "./MotionEvent.hpp"
#include "./View.hpp"
#include "./accessibility/AccessibilityNodeInfo_TouchDelegateInfo.hpp"
#include "./TouchDelegate.hpp"

namespace android::view
{
	// Fields
	jint TouchDelegate::ABOVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.TouchDelegate",
			"ABOVE"
		);
	}
	jint TouchDelegate::BELOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.TouchDelegate",
			"BELOW"
		);
	}
	jint TouchDelegate::TO_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.TouchDelegate",
			"TO_LEFT"
		);
	}
	jint TouchDelegate::TO_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.TouchDelegate",
			"TO_RIGHT"
		);
	}
	
	// QAndroidJniObject forward
	TouchDelegate::TouchDelegate(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TouchDelegate::TouchDelegate(android::graphics::Rect arg0, android::view::View arg1)
		: __JniBaseClass(
			"android.view.TouchDelegate",
			"(Landroid/graphics/Rect;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::view::accessibility::AccessibilityNodeInfo_TouchDelegateInfo TouchDelegate::getTouchDelegateInfo()
	{
		return callObjectMethod(
			"getTouchDelegateInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$TouchDelegateInfo;"
		);
	}
	jboolean TouchDelegate::onTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean TouchDelegate::onTouchExplorationHoverEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchExplorationHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
} // namespace android::view

