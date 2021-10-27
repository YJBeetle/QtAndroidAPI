#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "./TextView.hpp"

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
		static jstring DEFAULT_FORMAT_12_HOUR();
		static jstring DEFAULT_FORMAT_24_HOUR();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		jstring getFormat12Hour();
		jstring getFormat24Hour();
		jstring getTimeZone();
		jboolean is24HourModeEnabled();
		void onVisibilityAggregated(jboolean arg0);
		void setFormat12Hour(jstring arg0);
		void setFormat12Hour(const QString &arg0);
		void setFormat24Hour(jstring arg0);
		void setFormat24Hour(const QString &arg0);
		void setTimeZone(jstring arg0);
		void setTimeZone(const QString &arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jstring TextClock::DEFAULT_FORMAT_12_HOUR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.TextClock",
			"DEFAULT_FORMAT_12_HOUR",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring TextClock::DEFAULT_FORMAT_24_HOUR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.TextClock",
			"DEFAULT_FORMAT_24_HOUR",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	
	// Constructors
	void TextClock::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TextClock",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void TextClock::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TextClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void TextClock::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TextClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void TextClock::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TextClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jstring TextClock::getFormat12Hour()
	{
		return __thiz.callObjectMethod(
			"getFormat12Hour",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring TextClock::getFormat24Hour()
	{
		return __thiz.callObjectMethod(
			"getFormat24Hour",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring TextClock::getTimeZone()
	{
		return __thiz.callObjectMethod(
			"getTimeZone",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean TextClock::is24HourModeEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"is24HourModeEnabled",
			"()Z"
		);
	}
	void TextClock::onVisibilityAggregated(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onVisibilityAggregated",
			"(Z)V",
			arg0
		);
	}
	void TextClock::setFormat12Hour(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setFormat12Hour",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TextClock::setFormat12Hour(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setFormat12Hour",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TextClock::setFormat24Hour(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setFormat24Hour",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TextClock::setFormat24Hour(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setFormat24Hour",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TextClock::setTimeZone(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTimeZone",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TextClock::setTimeZone(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setTimeZone",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class TextClock : public __jni_impl::android::widget::TextClock
	{
	public:
		TextClock(QAndroidJniObject obj) { __thiz = obj; }
		TextClock(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		TextClock(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TextClock(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		TextClock(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

