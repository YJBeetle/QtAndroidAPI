#pragma once

#ifndef ANDROID_WIDGET_TEXTCLOCK
#define ANDROID_WIDGET_TEXTCLOCK

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "TextView.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::widget
{
	class TextClock : public __jni_impl::android::widget::TextView
	{
	public:
		// Fields
		static QAndroidJniObject DEFAULT_FORMAT_12_HOUR();
		static QAndroidJniObject DEFAULT_FORMAT_24_HOUR();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void setTimeZone(jstring arg0);
		QAndroidJniObject getTimeZone();
		void onVisibilityAggregated(jboolean arg0);
		QAndroidJniObject getFormat12Hour();
		void setFormat12Hour(jstring arg0);
		QAndroidJniObject getFormat24Hour();
		void setFormat24Hour(jstring arg0);
		jboolean is24HourModeEnabled();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	QAndroidJniObject TextClock::DEFAULT_FORMAT_12_HOUR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.TextClock",
			"DEFAULT_FORMAT_12_HOUR",
			"Ljava/lang/CharSequence;");
	}
	QAndroidJniObject TextClock::DEFAULT_FORMAT_24_HOUR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.TextClock",
			"DEFAULT_FORMAT_24_HOUR",
			"Ljava/lang/CharSequence;");
	}
	
	// Constructors
	void TextClock::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TextClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void TextClock::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TextClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void TextClock::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TextClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void TextClock::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TextClock",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void TextClock::setTimeZone(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTimeZone",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject TextClock::getTimeZone()
	{
		return __thiz.callObjectMethod(
			"getTimeZone",
			"()Ljava/lang/String;");
	}
	void TextClock::onVisibilityAggregated(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onVisibilityAggregated",
			"(Z)V",
			arg0);
	}
	QAndroidJniObject TextClock::getFormat12Hour()
	{
		return __thiz.callObjectMethod(
			"getFormat12Hour",
			"()Ljava/lang/CharSequence;");
	}
	void TextClock::setFormat12Hour(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setFormat12Hour",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	QAndroidJniObject TextClock::getFormat24Hour()
	{
		return __thiz.callObjectMethod(
			"getFormat24Hour",
			"()Ljava/lang/CharSequence;");
	}
	void TextClock::setFormat24Hour(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setFormat24Hour",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	jboolean TextClock::is24HourModeEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"is24HourModeEnabled",
			"()Z");
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class TextClock : public __jni_impl::android::widget::TextClock
	{
	public:
		TextClock(QAndroidJniObject obj) { __thiz = obj; }
		TextClock(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		TextClock(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		TextClock(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TextClock(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_TEXTCLOCK

