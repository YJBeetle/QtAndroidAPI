#pragma once

#ifndef ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_RELATIVEUNIT
#define ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_RELATIVEUNIT

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class RelativeDateTimeFormatter_RelativeUnit : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject SECONDS();
		static QAndroidJniObject MINUTES();
		static QAndroidJniObject HOURS();
		static QAndroidJniObject DAYS();
		static QAndroidJniObject WEEKS();
		static QAndroidJniObject MONTHS();
		static QAndroidJniObject YEARS();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject RelativeDateTimeFormatter_RelativeUnit::SECONDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"SECONDS",
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
	QAndroidJniObject RelativeDateTimeFormatter_RelativeUnit::HOURS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"HOURS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeUnit::DAYS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"DAYS",
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
	QAndroidJniObject RelativeDateTimeFormatter_RelativeUnit::MONTHS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"MONTHS",
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
	jarray RelativeDateTimeFormatter_RelativeUnit::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"values",
			"()[Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		).object<jarray>();
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeUnit::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;",
			arg0
		);
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

#endif // ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_RELATIVEUNIT

