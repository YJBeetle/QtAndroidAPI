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
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		jstring getAccessibilityClassName();
		jlong getBase();
		jstring getContentDescription();
		jstring getFormat();
		QAndroidJniObject getOnChronometerTickListener();
		jboolean isCountDown();
		jboolean isTheFinalCountDown();
		void setBase(jlong arg0);
		void setCountDown(jboolean arg0);
		void setFormat(jstring arg0);
		void setFormat(const QString &arg0);
		void setOnChronometerTickListener(__jni_impl::__JniBaseClass arg0);
		void start();
		void stop();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void Chronometer::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Chronometer",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void Chronometer::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Chronometer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Chronometer::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Chronometer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Chronometer::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Chronometer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jstring Chronometer::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jlong Chronometer::getBase()
	{
		return __thiz.callMethod<jlong>(
			"getBase",
			"()J"
		);
	}
	jstring Chronometer::getContentDescription()
	{
		return __thiz.callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring Chronometer::getFormat()
	{
		return __thiz.callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Chronometer::getOnChronometerTickListener()
	{
		return __thiz.callObjectMethod(
			"getOnChronometerTickListener",
			"()Landroid/widget/Chronometer$OnChronometerTickListener;"
		);
	}
	jboolean Chronometer::isCountDown()
	{
		return __thiz.callMethod<jboolean>(
			"isCountDown",
			"()Z"
		);
	}
	jboolean Chronometer::isTheFinalCountDown()
	{
		return __thiz.callMethod<jboolean>(
			"isTheFinalCountDown",
			"()Z"
		);
	}
	void Chronometer::setBase(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setBase",
			"(J)V",
			arg0
		);
	}
	void Chronometer::setCountDown(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCountDown",
			"(Z)V",
			arg0
		);
	}
	void Chronometer::setFormat(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setFormat",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Chronometer::setFormat(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setFormat",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Chronometer::setOnChronometerTickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnChronometerTickListener",
			"(Landroid/widget/Chronometer$OnChronometerTickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Chronometer::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
	void Chronometer::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class Chronometer : public __jni_impl::android::widget::Chronometer
	{
	public:
		Chronometer(QAndroidJniObject obj) { __thiz = obj; }
		Chronometer(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		Chronometer(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Chronometer(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Chronometer(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_CHRONOMETER

