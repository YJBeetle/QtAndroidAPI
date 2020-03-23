#pragma once

#ifndef ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_STYLE
#define ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_STYLE

#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class RelativeDateTimeFormatter_Style : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject LONG();
		static QAndroidJniObject SHORT();
		static QAndroidJniObject NARROW();
		
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
	QAndroidJniObject RelativeDateTimeFormatter_Style::LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"LONG",
			"Landroid/icu/text/RelativeDateTimeFormatter$Style;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_Style::SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"SHORT",
			"Landroid/icu/text/RelativeDateTimeFormatter$Style;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_Style::NARROW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"NARROW",
			"Landroid/icu/text/RelativeDateTimeFormatter$Style;");
	}
	
	// Constructors
	void RelativeDateTimeFormatter_Style::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject RelativeDateTimeFormatter_Style::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"values",
			"()[Landroid/icu/text/RelativeDateTimeFormatter$Style;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_Style::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$Style;",
			arg0);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class RelativeDateTimeFormatter_Style : public __jni_impl::android::icu::text::RelativeDateTimeFormatter_Style
	{
	public:
		RelativeDateTimeFormatter_Style(QAndroidJniObject obj) { __thiz = obj; }
		RelativeDateTimeFormatter_Style()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_STYLE

