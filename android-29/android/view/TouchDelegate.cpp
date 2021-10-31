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
	
	TouchDelegate::TouchDelegate(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TouchDelegate::TouchDelegate(android::graphics::Rect arg0, android::view::View arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.TouchDelegate",
			"(Landroid/graphics/Rect;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject TouchDelegate::getTouchDelegateInfo()
	{
		return __thiz.callObjectMethod(
			"getTouchDelegateInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$TouchDelegateInfo;"
		);
	}
	jboolean TouchDelegate::onTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TouchDelegate::onTouchExplorationHoverEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchExplorationHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view

