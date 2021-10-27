#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./AdapterView.hpp"
#include "./AdapterViewAnimator.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::widget
{
	class AdapterViewFlipper : public __jni_impl::android::widget::AdapterViewAnimator
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void fyiWillBeAdvancedByHostKThx();
		jstring getAccessibilityClassName();
		jint getFlipInterval();
		jboolean isAutoStart();
		jboolean isFlipping();
		void setAdapter(__jni_impl::__JniBaseClass arg0);
		void setAutoStart(jboolean arg0);
		void setFlipInterval(jint arg0);
		void showNext();
		void showPrevious();
		void startFlipping();
		void stopFlipping();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void AdapterViewFlipper::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AdapterViewFlipper",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void AdapterViewFlipper::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AdapterViewFlipper",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AdapterViewFlipper::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AdapterViewFlipper",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void AdapterViewFlipper::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AdapterViewFlipper",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void AdapterViewFlipper::fyiWillBeAdvancedByHostKThx()
	{
		__thiz.callMethod<void>(
			"fyiWillBeAdvancedByHostKThx",
			"()V"
		);
	}
	jstring AdapterViewFlipper::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AdapterViewFlipper::getFlipInterval()
	{
		return __thiz.callMethod<jint>(
			"getFlipInterval",
			"()I"
		);
	}
	jboolean AdapterViewFlipper::isAutoStart()
	{
		return __thiz.callMethod<jboolean>(
			"isAutoStart",
			"()Z"
		);
	}
	jboolean AdapterViewFlipper::isFlipping()
	{
		return __thiz.callMethod<jboolean>(
			"isFlipping",
			"()Z"
		);
	}
	void AdapterViewFlipper::setAdapter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.__jniObject().object()
		);
	}
	void AdapterViewFlipper::setAutoStart(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAutoStart",
			"(Z)V",
			arg0
		);
	}
	void AdapterViewFlipper::setFlipInterval(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFlipInterval",
			"(I)V",
			arg0
		);
	}
	void AdapterViewFlipper::showNext()
	{
		__thiz.callMethod<void>(
			"showNext",
			"()V"
		);
	}
	void AdapterViewFlipper::showPrevious()
	{
		__thiz.callMethod<void>(
			"showPrevious",
			"()V"
		);
	}
	void AdapterViewFlipper::startFlipping()
	{
		__thiz.callMethod<void>(
			"startFlipping",
			"()V"
		);
	}
	void AdapterViewFlipper::stopFlipping()
	{
		__thiz.callMethod<void>(
			"stopFlipping",
			"()V"
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class AdapterViewFlipper : public __jni_impl::android::widget::AdapterViewFlipper
	{
	public:
		AdapterViewFlipper(QAndroidJniObject obj) { __thiz = obj; }
		AdapterViewFlipper(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		AdapterViewFlipper(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		AdapterViewFlipper(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		AdapterViewFlipper(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

