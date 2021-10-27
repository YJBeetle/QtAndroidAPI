#pragma once

#ifndef ANDROID_WIDGET_VIEWANIMATOR
#define ANDROID_WIDGET_VIEWANIMATOR

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "FrameLayout.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::view::animation
{
	class Animation;
}

namespace __jni_impl::android::widget
{
	class ViewAnimator : public __jni_impl::android::widget::FrameLayout
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		void addView(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::ViewGroup_LayoutParams arg2);
		jstring getAccessibilityClassName();
		jboolean getAnimateFirstView();
		jint getBaseline();
		QAndroidJniObject getCurrentView();
		jint getDisplayedChild();
		QAndroidJniObject getInAnimation();
		QAndroidJniObject getOutAnimation();
		void removeAllViews();
		void removeView(__jni_impl::android::view::View arg0);
		void removeViewAt(jint arg0);
		void removeViewInLayout(__jni_impl::android::view::View arg0);
		void removeViews(jint arg0, jint arg1);
		void removeViewsInLayout(jint arg0, jint arg1);
		void setAnimateFirstView(jboolean arg0);
		void setDisplayedChild(jint arg0);
		void setInAnimation(__jni_impl::android::view::animation::Animation arg0);
		void setInAnimation(__jni_impl::android::content::Context arg0, jint arg1);
		void setOutAnimation(__jni_impl::android::view::animation::Animation arg0);
		void setOutAnimation(__jni_impl::android::content::Context arg0, jint arg1);
		void showNext();
		void showPrevious();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/animation/Animation.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void ViewAnimator::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ViewAnimator",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewAnimator::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ViewAnimator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void ViewAnimator::addView(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::ViewGroup_LayoutParams arg2)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jstring ViewAnimator::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean ViewAnimator::getAnimateFirstView()
	{
		return __thiz.callMethod<jboolean>(
			"getAnimateFirstView",
			"()Z"
		);
	}
	jint ViewAnimator::getBaseline()
	{
		return __thiz.callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	QAndroidJniObject ViewAnimator::getCurrentView()
	{
		return __thiz.callObjectMethod(
			"getCurrentView",
			"()Landroid/view/View;"
		);
	}
	jint ViewAnimator::getDisplayedChild()
	{
		return __thiz.callMethod<jint>(
			"getDisplayedChild",
			"()I"
		);
	}
	QAndroidJniObject ViewAnimator::getInAnimation()
	{
		return __thiz.callObjectMethod(
			"getInAnimation",
			"()Landroid/view/animation/Animation;"
		);
	}
	QAndroidJniObject ViewAnimator::getOutAnimation()
	{
		return __thiz.callObjectMethod(
			"getOutAnimation",
			"()Landroid/view/animation/Animation;"
		);
	}
	void ViewAnimator::removeAllViews()
	{
		__thiz.callMethod<void>(
			"removeAllViews",
			"()V"
		);
	}
	void ViewAnimator::removeView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"removeView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewAnimator::removeViewAt(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeViewAt",
			"(I)V",
			arg0
		);
	}
	void ViewAnimator::removeViewInLayout(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"removeViewInLayout",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewAnimator::removeViews(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"removeViews",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ViewAnimator::removeViewsInLayout(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"removeViewsInLayout",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ViewAnimator::setAnimateFirstView(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAnimateFirstView",
			"(Z)V",
			arg0
		);
	}
	void ViewAnimator::setDisplayedChild(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDisplayedChild",
			"(I)V",
			arg0
		);
	}
	void ViewAnimator::setInAnimation(__jni_impl::android::view::animation::Animation arg0)
	{
		__thiz.callMethod<void>(
			"setInAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewAnimator::setInAnimation(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setInAnimation",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ViewAnimator::setOutAnimation(__jni_impl::android::view::animation::Animation arg0)
	{
		__thiz.callMethod<void>(
			"setOutAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewAnimator::setOutAnimation(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setOutAnimation",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ViewAnimator::showNext()
	{
		__thiz.callMethod<void>(
			"showNext",
			"()V"
		);
	}
	void ViewAnimator::showPrevious()
	{
		__thiz.callMethod<void>(
			"showPrevious",
			"()V"
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ViewAnimator : public __jni_impl::android::widget::ViewAnimator
	{
	public:
		ViewAnimator(QAndroidJniObject obj) { __thiz = obj; }
		ViewAnimator(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		ViewAnimator(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_VIEWANIMATOR

