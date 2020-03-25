#pragma once

#ifndef ANDROID_ICU_TEXT_TIMEZONEFORMAT_STYLE
#define ANDROID_ICU_TEXT_TIMEZONEFORMAT_STYLE

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class TimeZoneFormat_Style : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject GENERIC_LOCATION();
		static QAndroidJniObject GENERIC_LONG();
		static QAndroidJniObject GENERIC_SHORT();
		static QAndroidJniObject SPECIFIC_LONG();
		static QAndroidJniObject SPECIFIC_SHORT();
		static QAndroidJniObject LOCALIZED_GMT();
		static QAndroidJniObject LOCALIZED_GMT_SHORT();
		static QAndroidJniObject ISO_BASIC_SHORT();
		static QAndroidJniObject ISO_BASIC_LOCAL_SHORT();
		static QAndroidJniObject ISO_BASIC_FIXED();
		static QAndroidJniObject ISO_BASIC_LOCAL_FIXED();
		static QAndroidJniObject ISO_BASIC_FULL();
		static QAndroidJniObject ISO_BASIC_LOCAL_FULL();
		static QAndroidJniObject ISO_EXTENDED_FIXED();
		static QAndroidJniObject ISO_EXTENDED_LOCAL_FIXED();
		static QAndroidJniObject ISO_EXTENDED_FULL();
		static QAndroidJniObject ISO_EXTENDED_LOCAL_FULL();
		static QAndroidJniObject ZONE_ID();
		static QAndroidJniObject ZONE_ID_SHORT();
		static QAndroidJniObject EXEMPLAR_LOCATION();
		
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
	QAndroidJniObject TimeZoneFormat_Style::GENERIC_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"GENERIC_LOCATION",
			"Landroid/icu/text/TimeZoneFormat$Style;");
	}
	QAndroidJniObject TimeZoneFormat_Style::GENERIC_LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"GENERIC_LONG",
			"Landroid/icu/text/TimeZoneFormat$Style;");
	}
	QAndroidJniObject TimeZoneFormat_Style::GENERIC_SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"GENERIC_SHORT",
			"Landroid/icu/text/TimeZoneFormat$Style;");
	}
	QAndroidJniObject TimeZoneFormat_Style::SPECIFIC_LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"SPECIFIC_LONG",
			"Landroid/icu/text/TimeZoneFormat$Style;");
	}
	QAndroidJniObject TimeZoneFormat_Style::SPECIFIC_SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"SPECIFIC_SHORT",
			"Landroid/icu/text/TimeZoneFormat$Style;");
	}
	QAndroidJniObject TimeZoneFormat_Style::LOCALIZED_GMT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"LOCALIZED_GMT",
			"Landroid/icu/text/TimeZoneFormat$Style;");
	}
	QAndroidJniObject TimeZoneFormat_Style::LOCALIZED_GMT_SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"LOCALIZED_GMT_SHORT",
			"Landroid/icu/text/TimeZoneFormat$Style;");
	}
	QAndroidJniObject TimeZoneFormat_Style::ISO_BASIC_SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_BASIC_SHORT",
			"Landroid/icu/text/TimeZoneFormat$Style;");
	}
	QAndroidJniObject TimeZoneFormat_Style::ISO_BASIC_LOCAL_SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_BASIC_LOCAL_SHORT",
			"Landroid/icu/text/TimeZoneFormat$Style;");
	}
	QAndroidJniObject TimeZoneFormat_Style::ISO_BASIC_FIXED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_BASIC_FIXED",
			"Landroid/icu/text/TimeZoneFormat$Style;");
	}
	QAndroidJniObject TimeZoneFormat_Style::ISO_BASIC_LOCAL_FIXED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_BASIC_LOCAL_FIXED",
			"Landroid/icu/text/TimeZoneFormat$Style;");
	}
	QAndroidJniObject TimeZoneFormat_Style::ISO_BASIC_FULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_BASIC_FULL",
			"Landroid/icu/text/TimeZoneFormat$Style;");
	}
	QAndroidJniObject TimeZoneFormat_Style::ISO_BASIC_LOCAL_FULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_BASIC_LOCAL_FULL",
			"Landroid/icu/text/TimeZoneFormat$Style;");
	}
	QAndroidJniObject TimeZoneFormat_Style::ISO_EXTENDED_FIXED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_EXTENDED_FIXED",
			"Landroid/icu/text/TimeZoneFormat$Style;");
	}
	QAndroidJniObject TimeZoneFormat_Style::ISO_EXTENDED_LOCAL_FIXED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_EXTENDED_LOCAL_FIXED",
			"Landroid/icu/text/TimeZoneFormat$Style;");
	}
	QAndroidJniObject TimeZoneFormat_Style::ISO_EXTENDED_FULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_EXTENDED_FULL",
			"Landroid/icu/text/TimeZoneFormat$Style;");
	}
	QAndroidJniObject TimeZoneFormat_Style::ISO_EXTENDED_LOCAL_FULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_EXTENDED_LOCAL_FULL",
			"Landroid/icu/text/TimeZoneFormat$Style;");
	}
	QAndroidJniObject TimeZoneFormat_Style::ZONE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ZONE_ID",
			"Landroid/icu/text/TimeZoneFormat$Style;");
	}
	QAndroidJniObject TimeZoneFormat_Style::ZONE_ID_SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ZONE_ID_SHORT",
			"Landroid/icu/text/TimeZoneFormat$Style;");
	}
	QAndroidJniObject TimeZoneFormat_Style::EXEMPLAR_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"EXEMPLAR_LOCATION",
			"Landroid/icu/text/TimeZoneFormat$Style;");
	}
	
	// Constructors
	void TimeZoneFormat_Style::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.TimeZoneFormat$Style",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TimeZoneFormat_Style::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$Style",
			"values",
			"()[Landroid/icu/text/TimeZoneFormat$Style;");
	}
	QAndroidJniObject TimeZoneFormat_Style::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$Style",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat$Style;",
			arg0);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class TimeZoneFormat_Style : public __jni_impl::android::icu::text::TimeZoneFormat_Style
	{
	public:
		TimeZoneFormat_Style(QAndroidJniObject obj) { __thiz = obj; }
		TimeZoneFormat_Style()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_TIMEZONEFORMAT_STYLE

