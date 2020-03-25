#pragma once

#ifndef ANDROID_ICU_TEXT_DATEFORMAT_BOOLEANATTRIBUTE
#define ANDROID_ICU_TEXT_DATEFORMAT_BOOLEANATTRIBUTE

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class DateFormat_BooleanAttribute : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject PARSE_ALLOW_WHITESPACE();
		static QAndroidJniObject PARSE_ALLOW_NUMERIC();
		static QAndroidJniObject PARSE_MULTIPLE_PATTERNS_FOR_MATCH();
		static QAndroidJniObject PARSE_PARTIAL_LITERAL_MATCH();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject DateFormat_BooleanAttribute::PARSE_ALLOW_WHITESPACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$BooleanAttribute",
			"PARSE_ALLOW_WHITESPACE",
			"Landroid/icu/text/DateFormat$BooleanAttribute;");
	}
	QAndroidJniObject DateFormat_BooleanAttribute::PARSE_ALLOW_NUMERIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$BooleanAttribute",
			"PARSE_ALLOW_NUMERIC",
			"Landroid/icu/text/DateFormat$BooleanAttribute;");
	}
	QAndroidJniObject DateFormat_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$BooleanAttribute",
			"PARSE_MULTIPLE_PATTERNS_FOR_MATCH",
			"Landroid/icu/text/DateFormat$BooleanAttribute;");
	}
	QAndroidJniObject DateFormat_BooleanAttribute::PARSE_PARTIAL_LITERAL_MATCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$BooleanAttribute",
			"PARSE_PARTIAL_LITERAL_MATCH",
			"Landroid/icu/text/DateFormat$BooleanAttribute;");
	}
	
	// Constructors
	void DateFormat_BooleanAttribute::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateFormat$BooleanAttribute",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject DateFormat_BooleanAttribute::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat$BooleanAttribute",
			"values",
			"()[Landroid/icu/text/DateFormat$BooleanAttribute;");
	}
	QAndroidJniObject DateFormat_BooleanAttribute::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat$BooleanAttribute",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DateFormat$BooleanAttribute;",
			arg0);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class DateFormat_BooleanAttribute : public __jni_impl::android::icu::text::DateFormat_BooleanAttribute
	{
	public:
		DateFormat_BooleanAttribute(QAndroidJniObject obj) { __thiz = obj; }
		DateFormat_BooleanAttribute()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_DATEFORMAT_BOOLEANATTRIBUTE

