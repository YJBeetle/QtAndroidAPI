#pragma once

#ifndef ANDROID_WIDGET_TEXTSWITCHER
#define ANDROID_WIDGET_TEXTSWITCHER

#include "ViewSwitcher.hpp"

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
	class TextSwitcher : public __jni_impl::android::widget::ViewSwitcher
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		void setText(jstring arg0);
		void setCurrentText(jstring arg0);
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
	void TextSwitcher::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TextSwitcher",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	void TextSwitcher::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TextSwitcher",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	void TextSwitcher::setText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	void TextSwitcher::setCurrentText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setCurrentText",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	QAndroidJniObject TextSwitcher::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;");
	}
	void TextSwitcher::addView(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::ViewGroup_LayoutParams arg2)
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
	class TextSwitcher : public __jni_impl::android::widget::TextSwitcher
	{
	public:
		TextSwitcher(QAndroidJniObject obj) { __thiz = obj; }
		TextSwitcher(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		TextSwitcher(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_TEXTSWITCHER

