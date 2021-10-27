#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo_TouchDelegateInfo;
}

namespace __jni_impl::android::view
{
	class TouchDelegate : public __JniBaseClass
	{
	public:
		// Fields
		static jint ABOVE();
		static jint BELOW();
		static jint TO_LEFT();
		static jint TO_RIGHT();
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::Rect arg0, __jni_impl::android::view::View arg1);
		
		// Methods
		QAndroidJniObject getTouchDelegateInfo();
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onTouchExplorationHoverEvent(__jni_impl::android::view::MotionEvent arg0);
	};
} // namespace __jni_impl::android::view

#include "../graphics/Rect.hpp"
#include "MotionEvent.hpp"
#include "View.hpp"
#include "accessibility/AccessibilityNodeInfo_TouchDelegateInfo.hpp"

namespace __jni_impl::android::view
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
	
	// Constructors
	void TouchDelegate::__constructor(__jni_impl::android::graphics::Rect arg0, __jni_impl::android::view::View arg1)
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
	jboolean TouchDelegate::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TouchDelegate::onTouchExplorationHoverEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchExplorationHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class TouchDelegate : public __jni_impl::android::view::TouchDelegate
	{
	public:
		TouchDelegate(QAndroidJniObject obj) { __thiz = obj; }
		TouchDelegate(__jni_impl::android::graphics::Rect arg0, __jni_impl::android::view::View arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view

