#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "FrameLayout.hpp"
#include "ViewAnimator.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::widget
{
	class ViewFlipper : public __jni_impl::android::widget::ViewAnimator
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		jstring getAccessibilityClassName();
		jint getFlipInterval();
		jboolean isAutoStart();
		jboolean isFlipping();
		void setAutoStart(jboolean arg0);
		void setFlipInterval(jint arg0);
		void startFlipping();
		void stopFlipping();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void ViewFlipper::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ViewFlipper",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewFlipper::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ViewFlipper",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jstring ViewFlipper::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint ViewFlipper::getFlipInterval()
	{
		return __thiz.callMethod<jint>(
			"getFlipInterval",
			"()I"
		);
	}
	jboolean ViewFlipper::isAutoStart()
	{
		return __thiz.callMethod<jboolean>(
			"isAutoStart",
			"()Z"
		);
	}
	jboolean ViewFlipper::isFlipping()
	{
		return __thiz.callMethod<jboolean>(
			"isFlipping",
			"()Z"
		);
	}
	void ViewFlipper::setAutoStart(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAutoStart",
			"(Z)V",
			arg0
		);
	}
	void ViewFlipper::setFlipInterval(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFlipInterval",
			"(I)V",
			arg0
		);
	}
	void ViewFlipper::startFlipping()
	{
		__thiz.callMethod<void>(
			"startFlipping",
			"()V"
		);
	}
	void ViewFlipper::stopFlipping()
	{
		__thiz.callMethod<void>(
			"stopFlipping",
			"()V"
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ViewFlipper : public __jni_impl::android::widget::ViewFlipper
	{
	public:
		ViewFlipper(QAndroidJniObject obj) { __thiz = obj; }
		ViewFlipper(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		ViewFlipper(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::widget

