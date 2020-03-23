#pragma once

#ifndef ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_RELATIVEDATETIMEUNIT
#define ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_RELATIVEDATETIMEUNIT

#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class RelativeDateTimeFormatter_RelativeDateTimeUnit : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject YEAR();
		static QAndroidJniObject QUARTER();
		static QAndroidJniObject MONTH();
		static QAndroidJniObject WEEK();
		static QAndroidJniObject DAY();
		static QAndroidJniObject HOUR();
		static QAndroidJniObject MINUTE();
		static QAndroidJniObject SECOND();
		static QAndroidJniObject SUNDAY();
		static QAndroidJniObject MONDAY();
		static QAndroidJniObject TUESDAY();
		static QAndroidJniObject WEDNESDAY();
		static QAndroidJniObject THURSDAY();
		static QAndroidJniObject FRIDAY();
		static QAndroidJniObject SATURDAY();
		
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
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"YEAR",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::QUARTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"QUARTER",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"MONTH",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::WEEK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"WEEK",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"DAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::HOUR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"HOUR",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::MINUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"MINUTE",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::SECOND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"SECOND",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::SUNDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"SUNDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::MONDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"MONDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::TUESDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"TUESDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::WEDNESDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"WEDNESDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::THURSDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"THURSDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::FRIDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"FRIDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::SATURDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"SATURDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;");
	}
	
	// Constructors
	void RelativeDateTimeFormatter_RelativeDateTimeUnit::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"values",
			"()[Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;",
			arg0);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class RelativeDateTimeFormatter_RelativeDateTimeUnit : public __jni_impl::android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit
	{
	public:
		RelativeDateTimeFormatter_RelativeDateTimeUnit(QAndroidJniObject obj) { __thiz = obj; }
		RelativeDateTimeFormatter_RelativeDateTimeUnit()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_RELATIVEDATETIMEUNIT

