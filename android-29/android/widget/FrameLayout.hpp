#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::widget
{
	class FrameLayout_LayoutParams;
}

namespace __jni_impl::android::widget
{
	class FrameLayout : public __jni_impl::android::view::ViewGroup
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		QAndroidJniObject generateLayoutParams(__jni_impl::__JniBaseClass arg0);
		jstring getAccessibilityClassName();
		jboolean getConsiderGoneChildrenWhenMeasuring();
		jboolean getMeasureAllChildren();
		void setForegroundGravity(jint arg0);
		void setMeasureAllChildren(jboolean arg0);
		jboolean shouldDelayChildPressedState();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./FrameLayout_LayoutParams.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void FrameLayout::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.FrameLayout",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void FrameLayout::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.FrameLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void FrameLayout::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.FrameLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void FrameLayout::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.FrameLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	QAndroidJniObject FrameLayout::generateLayoutParams(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/FrameLayout$LayoutParams;",
			arg0.__jniObject().object()
		);
	}
	jstring FrameLayout::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean FrameLayout::getConsiderGoneChildrenWhenMeasuring()
	{
		return __thiz.callMethod<jboolean>(
			"getConsiderGoneChildrenWhenMeasuring",
			"()Z"
		);
	}
	jboolean FrameLayout::getMeasureAllChildren()
	{
		return __thiz.callMethod<jboolean>(
			"getMeasureAllChildren",
			"()Z"
		);
	}
	void FrameLayout::setForegroundGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setForegroundGravity",
			"(I)V",
			arg0
		);
	}
	void FrameLayout::setMeasureAllChildren(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setMeasureAllChildren",
			"(Z)V",
			arg0
		);
	}
	jboolean FrameLayout::shouldDelayChildPressedState()
	{
		return __thiz.callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class FrameLayout : public __jni_impl::android::widget::FrameLayout
	{
	public:
		FrameLayout(QAndroidJniObject obj) { __thiz = obj; }
		FrameLayout(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		FrameLayout(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		FrameLayout(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		FrameLayout(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

