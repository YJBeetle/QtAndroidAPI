#pragma once

#ifndef ANDROID_WIDGET_VIEWSWITCHER
#define ANDROID_WIDGET_VIEWSWITCHER

#include "ViewAnimator.hpp"

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

namespace __jni_impl::android::widget
{
	class ViewSwitcher : public __jni_impl::android::widget::ViewAnimator
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		void setFactory(__jni_impl::__JniBaseClass arg0);
		void reset();
		QAndroidJniObject getNextView();
		QAndroidJniObject getAccessibilityClassName();
		void addView(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::ViewGroup_LayoutParams arg2);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void ViewSwitcher::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ViewSwitcher",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	void ViewSwitcher::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ViewSwitcher",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	void ViewSwitcher::setFactory(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFactory",
			"(Landroid/widget/ViewSwitcher$ViewFactory;)V",
			arg0.__jniObject().object());
	}
	void ViewSwitcher::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V");
	}
	QAndroidJniObject ViewSwitcher::getNextView()
	{
		return __thiz.callObjectMethod(
			"getNextView",
			"()Landroid/view/View;");
	}
	QAndroidJniObject ViewSwitcher::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;");
	}
	void ViewSwitcher::addView(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::ViewGroup_LayoutParams arg2)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ViewSwitcher : public __jni_impl::android::widget::ViewSwitcher
	{
	public:
		ViewSwitcher(QAndroidJniObject obj) { __thiz = obj; }
		ViewSwitcher(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		ViewSwitcher(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_VIEWSWITCHER

