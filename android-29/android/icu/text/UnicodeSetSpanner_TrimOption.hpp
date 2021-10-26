#pragma once

#ifndef ANDROID_ICU_TEXT_UNICODESETSPANNER_TRIMOPTION
#define ANDROID_ICU_TEXT_UNICODESETSPANNER_TRIMOPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class UnicodeSetSpanner_TrimOption : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject LEADING();
		static QAndroidJniObject BOTH();
		static QAndroidJniObject TRAILING();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject UnicodeSetSpanner_TrimOption::LEADING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSetSpanner$TrimOption",
			"LEADING",
			"Landroid/icu/text/UnicodeSetSpanner$TrimOption;"
		);
	}
	QAndroidJniObject UnicodeSetSpanner_TrimOption::BOTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSetSpanner$TrimOption",
			"BOTH",
			"Landroid/icu/text/UnicodeSetSpanner$TrimOption;"
		);
	}
	QAndroidJniObject UnicodeSetSpanner_TrimOption::TRAILING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSetSpanner$TrimOption",
			"TRAILING",
			"Landroid/icu/text/UnicodeSetSpanner$TrimOption;"
		);
	}
	
	// Constructors
	void UnicodeSetSpanner_TrimOption::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSetSpanner$TrimOption",
			"(V)V");
	}
	
	// Methods
	jarray UnicodeSetSpanner_TrimOption::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSetSpanner$TrimOption",
			"values",
			"()[Landroid/icu/text/UnicodeSetSpanner$TrimOption;"
		).object<jarray>();
	}
	QAndroidJniObject UnicodeSetSpanner_TrimOption::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSetSpanner$TrimOption",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSetSpanner$TrimOption;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSetSpanner_TrimOption::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSetSpanner$TrimOption",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSetSpanner$TrimOption;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class UnicodeSetSpanner_TrimOption : public __jni_impl::android::icu::text::UnicodeSetSpanner_TrimOption
	{
	public:
		UnicodeSetSpanner_TrimOption(QAndroidJniObject obj) { __thiz = obj; }
		UnicodeSetSpanner_TrimOption()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_UNICODESETSPANNER_TRIMOPTION

