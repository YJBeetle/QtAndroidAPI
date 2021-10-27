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
	class DisplayCutout : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::Rect arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::graphics::Insets arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Rect arg2, __jni_impl::android::graphics::Rect arg3, __jni_impl::android::graphics::Rect arg4);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getBoundingRectBottom();
		QAndroidJniObject getBoundingRectLeft();
		QAndroidJniObject getBoundingRectRight();
		QAndroidJniObject getBoundingRectTop();
		QAndroidJniObject getBoundingRects();
		jint getSafeInsetBottom();
		jint getSafeInsetLeft();
		jint getSafeInsetRight();
		jint getSafeInsetTop();
		jint hashCode();
		jstring toString();
	};
} // namespace __jni_impl::android::view

#include "../graphics/Insets.hpp"
#include "../graphics/Rect.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void DisplayCutout::__constructor(__jni_impl::android::graphics::Rect arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.DisplayCutout",
			"(Landroid/graphics/Rect;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DisplayCutout::__constructor(__jni_impl::android::graphics::Insets arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Rect arg2, __jni_impl::android::graphics::Rect arg3, __jni_impl::android::graphics::Rect arg4)
	{
		__thiz = QAndroidJniObject(
			"android.view.DisplayCutout",
			"(Landroid/graphics/Insets;Landroid/graphics/Rect;Landroid/graphics/Rect;Landroid/graphics/Rect;Landroid/graphics/Rect;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	
	// Methods
	jboolean DisplayCutout::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject DisplayCutout::getBoundingRectBottom()
	{
		return __thiz.callObjectMethod(
			"getBoundingRectBottom",
			"()Landroid/graphics/Rect;"
		);
	}
	QAndroidJniObject DisplayCutout::getBoundingRectLeft()
	{
		return __thiz.callObjectMethod(
			"getBoundingRectLeft",
			"()Landroid/graphics/Rect;"
		);
	}
	QAndroidJniObject DisplayCutout::getBoundingRectRight()
	{
		return __thiz.callObjectMethod(
			"getBoundingRectRight",
			"()Landroid/graphics/Rect;"
		);
	}
	QAndroidJniObject DisplayCutout::getBoundingRectTop()
	{
		return __thiz.callObjectMethod(
			"getBoundingRectTop",
			"()Landroid/graphics/Rect;"
		);
	}
	QAndroidJniObject DisplayCutout::getBoundingRects()
	{
		return __thiz.callObjectMethod(
			"getBoundingRects",
			"()Ljava/util/List;"
		);
	}
	jint DisplayCutout::getSafeInsetBottom()
	{
		return __thiz.callMethod<jint>(
			"getSafeInsetBottom",
			"()I"
		);
	}
	jint DisplayCutout::getSafeInsetLeft()
	{
		return __thiz.callMethod<jint>(
			"getSafeInsetLeft",
			"()I"
		);
	}
	jint DisplayCutout::getSafeInsetRight()
	{
		return __thiz.callMethod<jint>(
			"getSafeInsetRight",
			"()I"
		);
	}
	jint DisplayCutout::getSafeInsetTop()
	{
		return __thiz.callMethod<jint>(
			"getSafeInsetTop",
			"()I"
		);
	}
	jint DisplayCutout::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring DisplayCutout::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class DisplayCutout : public __jni_impl::android::view::DisplayCutout
	{
	public:
		DisplayCutout(QAndroidJniObject obj) { __thiz = obj; }
		DisplayCutout(__jni_impl::android::graphics::Rect arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DisplayCutout(__jni_impl::android::graphics::Insets arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Rect arg2, __jni_impl::android::graphics::Rect arg3, __jni_impl::android::graphics::Rect arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
	};
} // namespace android::view

