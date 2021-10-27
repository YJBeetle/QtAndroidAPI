#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class RelativeDateTimeFormatter_AbsoluteUnit : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DAY();
		static QAndroidJniObject FRIDAY();
		static QAndroidJniObject MONDAY();
		static QAndroidJniObject MONTH();
		static QAndroidJniObject NOW();
		static QAndroidJniObject SATURDAY();
		static QAndroidJniObject SUNDAY();
		static QAndroidJniObject THURSDAY();
		static QAndroidJniObject TUESDAY();
		static QAndroidJniObject WEDNESDAY();
		static QAndroidJniObject WEEK();
		static QAndroidJniObject YEAR();
		
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
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"DAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::FRIDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"FRIDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::MONDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"MONDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"MONTH",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::NOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"NOW",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::SATURDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"SATURDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::SUNDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"SUNDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::THURSDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"THURSDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::TUESDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"TUESDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::WEDNESDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"WEDNESDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::WEEK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"WEEK",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"YEAR",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	
	// Constructors
	void RelativeDateTimeFormatter_AbsoluteUnit::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;",
			arg0
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray RelativeDateTimeFormatter_AbsoluteUnit::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"values",
			"()[Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class RelativeDateTimeFormatter_AbsoluteUnit : public __jni_impl::android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit
	{
	public:
		RelativeDateTimeFormatter_AbsoluteUnit(QAndroidJniObject obj) { __thiz = obj; }
		RelativeDateTimeFormatter_AbsoluteUnit()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

