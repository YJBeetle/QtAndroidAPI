#pragma once

#ifndef ANDROID_WIDGET_CHRONOMETER
#define ANDROID_WIDGET_CHRONOMETER

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "TextView.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::widget
{
	class Chronometer : public __jni_impl::android::widget::TextView
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void start();
		void stop();
		void setFormat(jstring arg0);
		QAndroidJniObject getFormat();
		jlong getBase();
		void setCountDown(jboolean arg0);
		jboolean isTheFinalCountDown();
		void setBase(jlong arg0);
		void setOnChronometerTickListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getOnChronometerTickListener();
		QAndroidJniObject getAccessibilityClassName();
		QAndroidJniObject getContentDescription();
		jboolean isCountDown();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void Chronometer::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Chronometer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void Chronometer::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Chronometer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void Chronometer::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Chronometer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Chronometer::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Chronometer",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void Chronometer::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V");
	}
	void Chronometer::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V");
	}
	void Chronometer::setFormat(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setFormat",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject Chronometer::getFormat()
	{
		return __thiz.callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;");
	}
	jlong Chronometer::getBase()
	{
		return __thiz.callMethod<jlong>(
			"getBase",
			"()J");
	}
	void Chronometer::setCountDown(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCountDown",
			"(Z)V",
			arg0);
	}
	jboolean Chronometer::isTheFinalCountDown()
	{
		return __thiz.callMethod<jboolean>(
			"isTheFinalCountDown",
			"()Z");
	}
	void Chronometer::setBase(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setBase",
			"(J)V",
			arg0);
	}
	void Chronometer::setOnChronometerTickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnChronometerTickListener",
			"(Landroid/widget/Chronometer$OnChronometerTickListener;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Chronometer::getOnChronometerTickListener()
	{
		return __thiz.callObjectMethod(
			"getOnChronometerTickListener",
			"()Landroid/widget/Chronometer$OnChronometerTickListener;");
	}
	QAndroidJniObject Chronometer::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject Chronometer::getContentDescription()
	{
		return __thiz.callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;");
	}
	jboolean Chronometer::isCountDown()
	{
		return __thiz.callMethod<jboolean>(
			"isCountDown",
			"()Z");
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class Chronometer : public __jni_impl::android::widget::Chronometer
	{
	public:
		Chronometer(QAndroidJniObject obj) { __thiz = obj; }
		Chronometer(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		Chronometer(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Chronometer(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Chronometer(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_CHRONOMETER

