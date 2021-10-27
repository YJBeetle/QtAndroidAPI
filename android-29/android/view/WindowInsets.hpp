#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Insets;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::view
{
	class DisplayCutout;
}

namespace __jni_impl::android::view
{
	class WindowInsets : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::view::WindowInsets arg0);
		
		// Methods
		QAndroidJniObject consumeDisplayCutout();
		QAndroidJniObject consumeStableInsets();
		QAndroidJniObject consumeSystemWindowInsets();
		jboolean equals(jobject arg0);
		QAndroidJniObject getDisplayCutout();
		QAndroidJniObject getMandatorySystemGestureInsets();
		jint getStableInsetBottom();
		jint getStableInsetLeft();
		jint getStableInsetRight();
		jint getStableInsetTop();
		QAndroidJniObject getStableInsets();
		QAndroidJniObject getSystemGestureInsets();
		jint getSystemWindowInsetBottom();
		jint getSystemWindowInsetLeft();
		jint getSystemWindowInsetRight();
		jint getSystemWindowInsetTop();
		QAndroidJniObject getSystemWindowInsets();
		QAndroidJniObject getTappableElementInsets();
		jboolean hasInsets();
		jboolean hasStableInsets();
		jboolean hasSystemWindowInsets();
		jint hashCode();
		QAndroidJniObject inset(jint arg0, jint arg1, jint arg2, jint arg3);
		jboolean isConsumed();
		jboolean isRound();
		QAndroidJniObject replaceSystemWindowInsets(__jni_impl::android::graphics::Rect arg0);
		QAndroidJniObject replaceSystemWindowInsets(jint arg0, jint arg1, jint arg2, jint arg3);
		jstring toString();
	};
} // namespace __jni_impl::android::view

#include "../graphics/Insets.hpp"
#include "../graphics/Rect.hpp"
#include "./DisplayCutout.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void WindowInsets::__constructor(__jni_impl::android::view::WindowInsets arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.WindowInsets",
			"(Landroid/view/WindowInsets;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject WindowInsets::consumeDisplayCutout()
	{
		return __thiz.callObjectMethod(
			"consumeDisplayCutout",
			"()Landroid/view/WindowInsets;"
		);
	}
	QAndroidJniObject WindowInsets::consumeStableInsets()
	{
		return __thiz.callObjectMethod(
			"consumeStableInsets",
			"()Landroid/view/WindowInsets;"
		);
	}
	QAndroidJniObject WindowInsets::consumeSystemWindowInsets()
	{
		return __thiz.callObjectMethod(
			"consumeSystemWindowInsets",
			"()Landroid/view/WindowInsets;"
		);
	}
	jboolean WindowInsets::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject WindowInsets::getDisplayCutout()
	{
		return __thiz.callObjectMethod(
			"getDisplayCutout",
			"()Landroid/view/DisplayCutout;"
		);
	}
	QAndroidJniObject WindowInsets::getMandatorySystemGestureInsets()
	{
		return __thiz.callObjectMethod(
			"getMandatorySystemGestureInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	jint WindowInsets::getStableInsetBottom()
	{
		return __thiz.callMethod<jint>(
			"getStableInsetBottom",
			"()I"
		);
	}
	jint WindowInsets::getStableInsetLeft()
	{
		return __thiz.callMethod<jint>(
			"getStableInsetLeft",
			"()I"
		);
	}
	jint WindowInsets::getStableInsetRight()
	{
		return __thiz.callMethod<jint>(
			"getStableInsetRight",
			"()I"
		);
	}
	jint WindowInsets::getStableInsetTop()
	{
		return __thiz.callMethod<jint>(
			"getStableInsetTop",
			"()I"
		);
	}
	QAndroidJniObject WindowInsets::getStableInsets()
	{
		return __thiz.callObjectMethod(
			"getStableInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	QAndroidJniObject WindowInsets::getSystemGestureInsets()
	{
		return __thiz.callObjectMethod(
			"getSystemGestureInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	jint WindowInsets::getSystemWindowInsetBottom()
	{
		return __thiz.callMethod<jint>(
			"getSystemWindowInsetBottom",
			"()I"
		);
	}
	jint WindowInsets::getSystemWindowInsetLeft()
	{
		return __thiz.callMethod<jint>(
			"getSystemWindowInsetLeft",
			"()I"
		);
	}
	jint WindowInsets::getSystemWindowInsetRight()
	{
		return __thiz.callMethod<jint>(
			"getSystemWindowInsetRight",
			"()I"
		);
	}
	jint WindowInsets::getSystemWindowInsetTop()
	{
		return __thiz.callMethod<jint>(
			"getSystemWindowInsetTop",
			"()I"
		);
	}
	QAndroidJniObject WindowInsets::getSystemWindowInsets()
	{
		return __thiz.callObjectMethod(
			"getSystemWindowInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	QAndroidJniObject WindowInsets::getTappableElementInsets()
	{
		return __thiz.callObjectMethod(
			"getTappableElementInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	jboolean WindowInsets::hasInsets()
	{
		return __thiz.callMethod<jboolean>(
			"hasInsets",
			"()Z"
		);
	}
	jboolean WindowInsets::hasStableInsets()
	{
		return __thiz.callMethod<jboolean>(
			"hasStableInsets",
			"()Z"
		);
	}
	jboolean WindowInsets::hasSystemWindowInsets()
	{
		return __thiz.callMethod<jboolean>(
			"hasSystemWindowInsets",
			"()Z"
		);
	}
	jint WindowInsets::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject WindowInsets::inset(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"inset",
			"(IIII)Landroid/view/WindowInsets;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean WindowInsets::isConsumed()
	{
		return __thiz.callMethod<jboolean>(
			"isConsumed",
			"()Z"
		);
	}
	jboolean WindowInsets::isRound()
	{
		return __thiz.callMethod<jboolean>(
			"isRound",
			"()Z"
		);
	}
	QAndroidJniObject WindowInsets::replaceSystemWindowInsets(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callObjectMethod(
			"replaceSystemWindowInsets",
			"(Landroid/graphics/Rect;)Landroid/view/WindowInsets;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WindowInsets::replaceSystemWindowInsets(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"replaceSystemWindowInsets",
			"(IIII)Landroid/view/WindowInsets;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jstring WindowInsets::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class WindowInsets : public __jni_impl::android::view::WindowInsets
	{
	public:
		WindowInsets(QAndroidJniObject obj) { __thiz = obj; }
		WindowInsets(__jni_impl::android::view::WindowInsets arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view

