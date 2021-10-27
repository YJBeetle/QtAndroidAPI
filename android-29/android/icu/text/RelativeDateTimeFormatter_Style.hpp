#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class RelativeDateTimeFormatter_Style : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject LONG();
		static QAndroidJniObject NARROW();
		static QAndroidJniObject SHORT();
		
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
	QAndroidJniObject RelativeDateTimeFormatter_Style::LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"LONG",
			"Landroid/icu/text/RelativeDateTimeFormatter$Style;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_Style::NARROW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"NARROW",
			"Landroid/icu/text/RelativeDateTimeFormatter$Style;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_Style::SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"SHORT",
			"Landroid/icu/text/RelativeDateTimeFormatter$Style;"
		);
	}
	
	// Constructors
	void RelativeDateTimeFormatter_Style::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject RelativeDateTimeFormatter_Style::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$Style;",
			arg0
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_Style::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$Style;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray RelativeDateTimeFormatter_Style::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"values",
			"()[Landroid/icu/text/RelativeDateTimeFormatter$Style;"
		).object<jarray>();
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

