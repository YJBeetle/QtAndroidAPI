#pragma once

#ifndef ANDROID_ICU_TEXT_UNICODESETSPANNER_COUNTMETHOD
#define ANDROID_ICU_TEXT_UNICODESETSPANNER_COUNTMETHOD

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class UnicodeSetSpanner_CountMethod : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject MIN_ELEMENTS();
		static QAndroidJniObject WHOLE_SPAN();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject UnicodeSetSpanner_CountMethod::MIN_ELEMENTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSetSpanner$CountMethod",
			"MIN_ELEMENTS",
			"Landroid/icu/text/UnicodeSetSpanner$CountMethod;"
		);
	}
	QAndroidJniObject UnicodeSetSpanner_CountMethod::WHOLE_SPAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSetSpanner$CountMethod",
			"WHOLE_SPAN",
			"Landroid/icu/text/UnicodeSetSpanner$CountMethod;"
		);
	}
	
	// Constructors
	void UnicodeSetSpanner_CountMethod::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSetSpanner$CountMethod",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject UnicodeSetSpanner_CountMethod::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSetSpanner$CountMethod",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSetSpanner$CountMethod;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSetSpanner_CountMethod::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSetSpanner$CountMethod",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSetSpanner$CountMethod;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray UnicodeSetSpanner_CountMethod::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSetSpanner$CountMethod",
			"values",
			"()[Landroid/icu/text/UnicodeSetSpanner$CountMethod;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class UnicodeSetSpanner_CountMethod : public __jni_impl::android::icu::text::UnicodeSetSpanner_CountMethod
	{
	public:
		UnicodeSetSpanner_CountMethod(QAndroidJniObject obj) { __thiz = obj; }
		UnicodeSetSpanner_CountMethod()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_UNICODESETSPANNER_COUNTMETHOD

