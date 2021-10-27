#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class RelativeDateTimeFormatter_RelativeUnit : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DAYS();
		static QAndroidJniObject HOURS();
		static QAndroidJniObject MINUTES();
		static QAndroidJniObject MONTHS();
		static QAndroidJniObject SECONDS();
		static QAndroidJniObject WEEKS();
		static QAndroidJniObject YEARS();
		
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
	QAndroidJniObject RelativeDateTimeFormatter_RelativeUnit::DAYS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"DAYS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeUnit::HOURS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"HOURS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeUnit::MINUTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"MINUTES",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeUnit::MONTHS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"MONTHS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeUnit::SECONDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"SECONDS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeUnit::WEEKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"WEEKS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeUnit::YEARS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"YEARS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	
	// Constructors
	void RelativeDateTimeFormatter_RelativeUnit::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject RelativeDateTimeFormatter_RelativeUnit::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;",
			arg0
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeUnit::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray RelativeDateTimeFormatter_RelativeUnit::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"values",
			"()[Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class RelativeDateTimeFormatter_RelativeUnit : public __jni_impl::android::icu::text::RelativeDateTimeFormatter_RelativeUnit
	{
	public:
		RelativeDateTimeFormatter_RelativeUnit(QAndroidJniObject obj) { __thiz = obj; }
		RelativeDateTimeFormatter_RelativeUnit()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

