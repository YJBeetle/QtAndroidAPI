#pragma once

#ifndef ANDROID_WIDGET_TOGGLEBUTTON
#define ANDROID_WIDGET_TOGGLEBUTTON

#include "CompoundButton.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}

namespace __jni_impl::android::widget
{
	class ToggleButton : public __jni_impl::android::widget::CompoundButton
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		jfloat getDisabledAlpha();
		QAndroidJniObject getTextOn();
		void setTextOn(jstring arg0);
		QAndroidJniObject getTextOff();
		void setTextOff(jstring arg0);
		QAndroidJniObject getAccessibilityClassName();
		void setBackgroundDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setChecked(jboolean arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void ToggleButton::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ToggleButton",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	void ToggleButton::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ToggleButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ToggleButton::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ToggleButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void ToggleButton::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ToggleButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	
	// Methods
	jfloat ToggleButton::getDisabledAlpha()
	{
		return __thiz.callMethod<jfloat>(
			"getDisabledAlpha",
			"()F");
	}
	QAndroidJniObject ToggleButton::getTextOn()
	{
		return __thiz.callObjectMethod(
			"getTextOn",
			"()Ljava/lang/CharSequence;");
	}
	void ToggleButton::setTextOn(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTextOn",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	QAndroidJniObject ToggleButton::getTextOff()
	{
		return __thiz.callObjectMethod(
			"getTextOff",
			"()Ljava/lang/CharSequence;");
	}
	void ToggleButton::setTextOff(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTextOff",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	QAndroidJniObject ToggleButton::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;");
	}
	void ToggleButton::setBackgroundDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
	void ToggleButton::setChecked(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ToggleButton : public __jni_impl::android::widget::ToggleButton
	{
	public:
		ToggleButton(QAndroidJniObject obj) { __thiz = obj; }
		ToggleButton(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		ToggleButton(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ToggleButton(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ToggleButton(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_TOGGLEBUTTON

