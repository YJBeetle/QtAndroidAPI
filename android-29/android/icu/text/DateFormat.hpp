#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/Format.hpp"
#include "UFormat.hpp"

namespace __jni_impl::android::icu::text
{
	class DateFormat_BooleanAttribute;
}
namespace __jni_impl::android::icu::text
{
	class DisplayContext;
}
namespace __jni_impl::android::icu::text
{
	class DisplayContext_Type;
}
namespace __jni_impl::android::icu::text
{
	class NumberFormat;
}
namespace __jni_impl::android::icu::util
{
	class Calendar;
}
namespace __jni_impl::android::icu::util
{
	class TimeZone;
}
namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::java::lang
{
	class StringBuffer;
}
namespace __jni_impl::java::text
{
	class FieldPosition;
}
namespace __jni_impl::java::text
{
	class ParsePosition;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::icu::text
{
	class DateFormat : public __jni_impl::android::icu::text::UFormat
	{
	public:
		// Fields
		static jstring ABBR_GENERIC_TZ();
		static jstring ABBR_MONTH();
		static jstring ABBR_MONTH_DAY();
		static jstring ABBR_MONTH_WEEKDAY_DAY();
		static jstring ABBR_QUARTER();
		static jstring ABBR_SPECIFIC_TZ();
		static jstring ABBR_UTC_TZ();
		static jstring ABBR_WEEKDAY();
		static jint AM_PM_FIELD();
		static jint AM_PM_MIDNIGHT_NOON_FIELD();
		static jint DATE_FIELD();
		static jstring DAY();
		static jint DAY_OF_WEEK_FIELD();
		static jint DAY_OF_WEEK_IN_MONTH_FIELD();
		static jint DAY_OF_YEAR_FIELD();
		static jint DEFAULT();
		static jint DOW_LOCAL_FIELD();
		static jint ERA_FIELD();
		static jint EXTENDED_YEAR_FIELD();
		static jint FLEXIBLE_DAY_PERIOD_FIELD();
		static jint FRACTIONAL_SECOND_FIELD();
		static jint FULL();
		static jstring GENERIC_TZ();
		static jstring HOUR();
		static jint HOUR0_FIELD();
		static jint HOUR1_FIELD();
		static jstring HOUR24();
		static jstring HOUR24_MINUTE();
		static jstring HOUR24_MINUTE_SECOND();
		static jstring HOUR_MINUTE();
		static jstring HOUR_MINUTE_SECOND();
		static jint HOUR_OF_DAY0_FIELD();
		static jint HOUR_OF_DAY1_FIELD();
		static jint JULIAN_DAY_FIELD();
		static jstring LOCATION_TZ();
		static jint LONG();
		static jint MEDIUM();
		static jint MILLISECONDS_IN_DAY_FIELD();
		static jint MILLISECOND_FIELD();
		static jstring MINUTE();
		static jint MINUTE_FIELD();
		static jstring MINUTE_SECOND();
		static jstring MONTH();
		static jstring MONTH_DAY();
		static jint MONTH_FIELD();
		static jstring MONTH_WEEKDAY_DAY();
		static jint NONE();
		static jstring NUM_MONTH();
		static jstring NUM_MONTH_DAY();
		static jstring NUM_MONTH_WEEKDAY_DAY();
		static jstring QUARTER();
		static jint QUARTER_FIELD();
		static jint RELATIVE();
		static jint RELATIVE_DEFAULT();
		static jint RELATIVE_FULL();
		static jint RELATIVE_LONG();
		static jint RELATIVE_MEDIUM();
		static jint RELATIVE_SHORT();
		static jstring SECOND();
		static jint SECOND_FIELD();
		static jint SHORT();
		static jstring SPECIFIC_TZ();
		static jint STANDALONE_DAY_FIELD();
		static jint STANDALONE_MONTH_FIELD();
		static jint STANDALONE_QUARTER_FIELD();
		static jint TIMEZONE_FIELD();
		static jint TIMEZONE_GENERIC_FIELD();
		static jint TIMEZONE_ISO_FIELD();
		static jint TIMEZONE_ISO_LOCAL_FIELD();
		static jint TIMEZONE_LOCALIZED_GMT_OFFSET_FIELD();
		static jint TIMEZONE_RFC_FIELD();
		static jint TIMEZONE_SPECIAL_FIELD();
		static jstring WEEKDAY();
		static jint WEEK_OF_MONTH_FIELD();
		static jint WEEK_OF_YEAR_FIELD();
		static jstring YEAR();
		static jstring YEAR_ABBR_MONTH();
		static jstring YEAR_ABBR_MONTH_DAY();
		static jstring YEAR_ABBR_MONTH_WEEKDAY_DAY();
		static jstring YEAR_ABBR_QUARTER();
		static jint YEAR_FIELD();
		static jstring YEAR_MONTH();
		static jstring YEAR_MONTH_DAY();
		static jstring YEAR_MONTH_WEEKDAY_DAY();
		static jint YEAR_NAME_FIELD();
		static jstring YEAR_NUM_MONTH();
		static jstring YEAR_NUM_MONTH_DAY();
		static jstring YEAR_NUM_MONTH_WEEKDAY_DAY();
		static jstring YEAR_QUARTER();
		static jint YEAR_WOY_FIELD();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray getAvailableLocales();
		static QAndroidJniObject getDateInstance();
		static QAndroidJniObject getDateInstance(jint arg0);
		static QAndroidJniObject getDateInstance(__jni_impl::android::icu::util::Calendar arg0, jint arg1);
		static QAndroidJniObject getDateInstance(jint arg0, __jni_impl::android::icu::util::ULocale arg1);
		static QAndroidJniObject getDateInstance(jint arg0, __jni_impl::java::util::Locale arg1);
		static QAndroidJniObject getDateInstance(__jni_impl::android::icu::util::Calendar arg0, jint arg1, __jni_impl::android::icu::util::ULocale arg2);
		static QAndroidJniObject getDateInstance(__jni_impl::android::icu::util::Calendar arg0, jint arg1, __jni_impl::java::util::Locale arg2);
		static QAndroidJniObject getDateTimeInstance();
		static QAndroidJniObject getDateTimeInstance(jint arg0, jint arg1);
		static QAndroidJniObject getDateTimeInstance(__jni_impl::android::icu::util::Calendar arg0, jint arg1, jint arg2);
		static QAndroidJniObject getDateTimeInstance(jint arg0, jint arg1, __jni_impl::android::icu::util::ULocale arg2);
		static QAndroidJniObject getDateTimeInstance(jint arg0, jint arg1, __jni_impl::java::util::Locale arg2);
		static QAndroidJniObject getDateTimeInstance(__jni_impl::android::icu::util::Calendar arg0, jint arg1, jint arg2, __jni_impl::android::icu::util::ULocale arg3);
		static QAndroidJniObject getDateTimeInstance(__jni_impl::android::icu::util::Calendar arg0, jint arg1, jint arg2, __jni_impl::java::util::Locale arg3);
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::Calendar arg0);
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::Calendar arg0, __jni_impl::java::util::Locale arg1);
		static QAndroidJniObject getInstanceForSkeleton(jstring arg0);
		static QAndroidJniObject getInstanceForSkeleton(const QString &arg0);
		static QAndroidJniObject getInstanceForSkeleton(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		static QAndroidJniObject getInstanceForSkeleton(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1);
		static QAndroidJniObject getInstanceForSkeleton(jstring arg0, __jni_impl::java::util::Locale arg1);
		static QAndroidJniObject getInstanceForSkeleton(const QString &arg0, __jni_impl::java::util::Locale arg1);
		static QAndroidJniObject getInstanceForSkeleton(__jni_impl::android::icu::util::Calendar arg0, jstring arg1, __jni_impl::android::icu::util::ULocale arg2);
		static QAndroidJniObject getInstanceForSkeleton(__jni_impl::android::icu::util::Calendar arg0, const QString &arg1, __jni_impl::android::icu::util::ULocale arg2);
		static QAndroidJniObject getInstanceForSkeleton(__jni_impl::android::icu::util::Calendar arg0, jstring arg1, __jni_impl::java::util::Locale arg2);
		static QAndroidJniObject getInstanceForSkeleton(__jni_impl::android::icu::util::Calendar arg0, const QString &arg1, __jni_impl::java::util::Locale arg2);
		static QAndroidJniObject getPatternInstance(jstring arg0);
		static QAndroidJniObject getPatternInstance(const QString &arg0);
		static QAndroidJniObject getPatternInstance(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		static QAndroidJniObject getPatternInstance(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1);
		static QAndroidJniObject getPatternInstance(jstring arg0, __jni_impl::java::util::Locale arg1);
		static QAndroidJniObject getPatternInstance(const QString &arg0, __jni_impl::java::util::Locale arg1);
		static QAndroidJniObject getPatternInstance(__jni_impl::android::icu::util::Calendar arg0, jstring arg1, __jni_impl::android::icu::util::ULocale arg2);
		static QAndroidJniObject getPatternInstance(__jni_impl::android::icu::util::Calendar arg0, const QString &arg1, __jni_impl::android::icu::util::ULocale arg2);
		static QAndroidJniObject getPatternInstance(__jni_impl::android::icu::util::Calendar arg0, jstring arg1, __jni_impl::java::util::Locale arg2);
		static QAndroidJniObject getPatternInstance(__jni_impl::android::icu::util::Calendar arg0, const QString &arg1, __jni_impl::java::util::Locale arg2);
		static QAndroidJniObject getTimeInstance();
		static QAndroidJniObject getTimeInstance(jint arg0);
		static QAndroidJniObject getTimeInstance(__jni_impl::android::icu::util::Calendar arg0, jint arg1);
		static QAndroidJniObject getTimeInstance(jint arg0, __jni_impl::android::icu::util::ULocale arg1);
		static QAndroidJniObject getTimeInstance(jint arg0, __jni_impl::java::util::Locale arg1);
		static QAndroidJniObject getTimeInstance(__jni_impl::android::icu::util::Calendar arg0, jint arg1, __jni_impl::android::icu::util::ULocale arg2);
		static QAndroidJniObject getTimeInstance(__jni_impl::android::icu::util::Calendar arg0, jint arg1, __jni_impl::java::util::Locale arg2);
		jobject clone();
		jboolean equals(jobject arg0);
		jstring format(__jni_impl::java::util::Date arg0);
		QAndroidJniObject format(__jni_impl::android::icu::util::Calendar arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(__jni_impl::java::util::Date arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		jboolean getBooleanAttribute(__jni_impl::android::icu::text::DateFormat_BooleanAttribute arg0);
		QAndroidJniObject getCalendar();
		QAndroidJniObject getContext(__jni_impl::android::icu::text::DisplayContext_Type arg0);
		QAndroidJniObject getNumberFormat();
		QAndroidJniObject getTimeZone();
		jint hashCode();
		jboolean isCalendarLenient();
		jboolean isLenient();
		QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject parse(const QString &arg0);
		QAndroidJniObject parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject parse(const QString &arg0, __jni_impl::java::text::ParsePosition arg1);
		void parse(jstring arg0, __jni_impl::android::icu::util::Calendar arg1, __jni_impl::java::text::ParsePosition arg2);
		void parse(const QString &arg0, __jni_impl::android::icu::util::Calendar arg1, __jni_impl::java::text::ParsePosition arg2);
		jobject parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		jobject parseObject(const QString &arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject setBooleanAttribute(__jni_impl::android::icu::text::DateFormat_BooleanAttribute arg0, jboolean arg1);
		void setCalendar(__jni_impl::android::icu::util::Calendar arg0);
		void setCalendarLenient(jboolean arg0);
		void setContext(__jni_impl::android::icu::text::DisplayContext arg0);
		void setLenient(jboolean arg0);
		void setNumberFormat(__jni_impl::android::icu::text::NumberFormat arg0);
		void setTimeZone(__jni_impl::android::icu::util::TimeZone arg0);
	};
} // namespace __jni_impl::android::icu::text

#include "DateFormat_BooleanAttribute.hpp"
#include "DisplayContext.hpp"
#include "DisplayContext_Type.hpp"
#include "NumberFormat.hpp"
#include "../util/Calendar.hpp"
#include "../util/TimeZone.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "../../../java/text/FieldPosition.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	jstring DateFormat::ABBR_GENERIC_TZ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_GENERIC_TZ",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::ABBR_MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_MONTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::ABBR_MONTH_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_MONTH_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::ABBR_MONTH_WEEKDAY_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_MONTH_WEEKDAY_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::ABBR_QUARTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_QUARTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::ABBR_SPECIFIC_TZ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_SPECIFIC_TZ",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::ABBR_UTC_TZ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_UTC_TZ",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::ABBR_WEEKDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_WEEKDAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::AM_PM_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"AM_PM_FIELD"
		);
	}
	jint DateFormat::AM_PM_MIDNIGHT_NOON_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"AM_PM_MIDNIGHT_NOON_FIELD"
		);
	}
	jint DateFormat::DATE_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"DATE_FIELD"
		);
	}
	jstring DateFormat::DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::DAY_OF_WEEK_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"DAY_OF_WEEK_FIELD"
		);
	}
	jint DateFormat::DAY_OF_WEEK_IN_MONTH_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"DAY_OF_WEEK_IN_MONTH_FIELD"
		);
	}
	jint DateFormat::DAY_OF_YEAR_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"DAY_OF_YEAR_FIELD"
		);
	}
	jint DateFormat::DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"DEFAULT"
		);
	}
	jint DateFormat::DOW_LOCAL_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"DOW_LOCAL_FIELD"
		);
	}
	jint DateFormat::ERA_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"ERA_FIELD"
		);
	}
	jint DateFormat::EXTENDED_YEAR_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"EXTENDED_YEAR_FIELD"
		);
	}
	jint DateFormat::FLEXIBLE_DAY_PERIOD_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"FLEXIBLE_DAY_PERIOD_FIELD"
		);
	}
	jint DateFormat::FRACTIONAL_SECOND_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"FRACTIONAL_SECOND_FIELD"
		);
	}
	jint DateFormat::FULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"FULL"
		);
	}
	jstring DateFormat::GENERIC_TZ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"GENERIC_TZ",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::HOUR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"HOUR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::HOUR0_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"HOUR0_FIELD"
		);
	}
	jint DateFormat::HOUR1_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"HOUR1_FIELD"
		);
	}
	jstring DateFormat::HOUR24()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"HOUR24",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::HOUR24_MINUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"HOUR24_MINUTE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::HOUR24_MINUTE_SECOND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"HOUR24_MINUTE_SECOND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::HOUR_MINUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"HOUR_MINUTE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::HOUR_MINUTE_SECOND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"HOUR_MINUTE_SECOND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::HOUR_OF_DAY0_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"HOUR_OF_DAY0_FIELD"
		);
	}
	jint DateFormat::HOUR_OF_DAY1_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"HOUR_OF_DAY1_FIELD"
		);
	}
	jint DateFormat::JULIAN_DAY_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"JULIAN_DAY_FIELD"
		);
	}
	jstring DateFormat::LOCATION_TZ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"LOCATION_TZ",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::LONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"LONG"
		);
	}
	jint DateFormat::MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"MEDIUM"
		);
	}
	jint DateFormat::MILLISECONDS_IN_DAY_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"MILLISECONDS_IN_DAY_FIELD"
		);
	}
	jint DateFormat::MILLISECOND_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"MILLISECOND_FIELD"
		);
	}
	jstring DateFormat::MINUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"MINUTE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::MINUTE_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"MINUTE_FIELD"
		);
	}
	jstring DateFormat::MINUTE_SECOND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"MINUTE_SECOND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"MONTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::MONTH_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"MONTH_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::MONTH_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"MONTH_FIELD"
		);
	}
	jstring DateFormat::MONTH_WEEKDAY_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"MONTH_WEEKDAY_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"NONE"
		);
	}
	jstring DateFormat::NUM_MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"NUM_MONTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::NUM_MONTH_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"NUM_MONTH_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::NUM_MONTH_WEEKDAY_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"NUM_MONTH_WEEKDAY_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::QUARTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"QUARTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::QUARTER_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"QUARTER_FIELD"
		);
	}
	jint DateFormat::RELATIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"RELATIVE"
		);
	}
	jint DateFormat::RELATIVE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"RELATIVE_DEFAULT"
		);
	}
	jint DateFormat::RELATIVE_FULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"RELATIVE_FULL"
		);
	}
	jint DateFormat::RELATIVE_LONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"RELATIVE_LONG"
		);
	}
	jint DateFormat::RELATIVE_MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"RELATIVE_MEDIUM"
		);
	}
	jint DateFormat::RELATIVE_SHORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"RELATIVE_SHORT"
		);
	}
	jstring DateFormat::SECOND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"SECOND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::SECOND_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"SECOND_FIELD"
		);
	}
	jint DateFormat::SHORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"SHORT"
		);
	}
	jstring DateFormat::SPECIFIC_TZ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"SPECIFIC_TZ",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::STANDALONE_DAY_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"STANDALONE_DAY_FIELD"
		);
	}
	jint DateFormat::STANDALONE_MONTH_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"STANDALONE_MONTH_FIELD"
		);
	}
	jint DateFormat::STANDALONE_QUARTER_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"STANDALONE_QUARTER_FIELD"
		);
	}
	jint DateFormat::TIMEZONE_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"TIMEZONE_FIELD"
		);
	}
	jint DateFormat::TIMEZONE_GENERIC_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"TIMEZONE_GENERIC_FIELD"
		);
	}
	jint DateFormat::TIMEZONE_ISO_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"TIMEZONE_ISO_FIELD"
		);
	}
	jint DateFormat::TIMEZONE_ISO_LOCAL_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"TIMEZONE_ISO_LOCAL_FIELD"
		);
	}
	jint DateFormat::TIMEZONE_LOCALIZED_GMT_OFFSET_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"TIMEZONE_LOCALIZED_GMT_OFFSET_FIELD"
		);
	}
	jint DateFormat::TIMEZONE_RFC_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"TIMEZONE_RFC_FIELD"
		);
	}
	jint DateFormat::TIMEZONE_SPECIAL_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"TIMEZONE_SPECIAL_FIELD"
		);
	}
	jstring DateFormat::WEEKDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"WEEKDAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::WEEK_OF_MONTH_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"WEEK_OF_MONTH_FIELD"
		);
	}
	jint DateFormat::WEEK_OF_YEAR_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"WEEK_OF_YEAR_FIELD"
		);
	}
	jstring DateFormat::YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::YEAR_ABBR_MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_ABBR_MONTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::YEAR_ABBR_MONTH_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_ABBR_MONTH_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::YEAR_ABBR_MONTH_WEEKDAY_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_ABBR_MONTH_WEEKDAY_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::YEAR_ABBR_QUARTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_ABBR_QUARTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::YEAR_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"YEAR_FIELD"
		);
	}
	jstring DateFormat::YEAR_MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_MONTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::YEAR_MONTH_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_MONTH_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::YEAR_MONTH_WEEKDAY_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_MONTH_WEEKDAY_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::YEAR_NAME_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"YEAR_NAME_FIELD"
		);
	}
	jstring DateFormat::YEAR_NUM_MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_NUM_MONTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::YEAR_NUM_MONTH_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_NUM_MONTH_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::YEAR_NUM_MONTH_WEEKDAY_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_NUM_MONTH_WEEKDAY_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::YEAR_QUARTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_QUARTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::YEAR_WOY_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateFormat",
			"YEAR_WOY_FIELD"
		);
	}
	
	// Constructors
	void DateFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateFormat",
			"(V)V");
	}
	
	// Methods
	jarray DateFormat::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	QAndroidJniObject DateFormat::getDateInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateInstance",
			"()Landroid/icu/text/DateFormat;"
		);
	}
	QAndroidJniObject DateFormat::getDateInstance(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateInstance",
			"(I)Landroid/icu/text/DateFormat;",
			arg0
		);
	}
	QAndroidJniObject DateFormat::getDateInstance(__jni_impl::android::icu::util::Calendar arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateInstance",
			"(Landroid/icu/util/Calendar;I)Landroid/icu/text/DateFormat;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DateFormat::getDateInstance(jint arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateInstance",
			"(ILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getDateInstance(jint arg0, __jni_impl::java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateInstance",
			"(ILjava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getDateInstance(__jni_impl::android::icu::util::Calendar arg0, jint arg1, __jni_impl::android::icu::util::ULocale arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateInstance",
			"(Landroid/icu/util/Calendar;ILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getDateInstance(__jni_impl::android::icu::util::Calendar arg0, jint arg1, __jni_impl::java::util::Locale arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateInstance",
			"(Landroid/icu/util/Calendar;ILjava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getDateTimeInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateTimeInstance",
			"()Landroid/icu/text/DateFormat;"
		);
	}
	QAndroidJniObject DateFormat::getDateTimeInstance(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateTimeInstance",
			"(II)Landroid/icu/text/DateFormat;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DateFormat::getDateTimeInstance(__jni_impl::android::icu::util::Calendar arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateTimeInstance",
			"(Landroid/icu/util/Calendar;II)Landroid/icu/text/DateFormat;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject DateFormat::getDateTimeInstance(jint arg0, jint arg1, __jni_impl::android::icu::util::ULocale arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateTimeInstance",
			"(IILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getDateTimeInstance(jint arg0, jint arg1, __jni_impl::java::util::Locale arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateTimeInstance",
			"(IILjava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getDateTimeInstance(__jni_impl::android::icu::util::Calendar arg0, jint arg1, jint arg2, __jni_impl::android::icu::util::ULocale arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateTimeInstance",
			"(Landroid/icu/util/Calendar;IILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getDateTimeInstance(__jni_impl::android::icu::util::Calendar arg0, jint arg1, jint arg2, __jni_impl::java::util::Locale arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateTimeInstance",
			"(Landroid/icu/util/Calendar;IILjava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstance",
			"()Landroid/icu/text/DateFormat;"
		);
	}
	QAndroidJniObject DateFormat::getInstance(__jni_impl::android::icu::util::Calendar arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstance",
			"(Landroid/icu/util/Calendar;)Landroid/icu/text/DateFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getInstance(__jni_impl::android::icu::util::Calendar arg0, __jni_impl::java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstance",
			"(Landroid/icu/util/Calendar;Ljava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getInstanceForSkeleton(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstanceForSkeleton",
			"(Ljava/lang/String;)Landroid/icu/text/DateFormat;",
			arg0
		);
	}
	QAndroidJniObject DateFormat::getInstanceForSkeleton(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstanceForSkeleton",
			"(Ljava/lang/String;)Landroid/icu/text/DateFormat;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DateFormat::getInstanceForSkeleton(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstanceForSkeleton",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getInstanceForSkeleton(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstanceForSkeleton",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getInstanceForSkeleton(jstring arg0, __jni_impl::java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstanceForSkeleton",
			"(Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getInstanceForSkeleton(const QString &arg0, __jni_impl::java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstanceForSkeleton",
			"(Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormat;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getInstanceForSkeleton(__jni_impl::android::icu::util::Calendar arg0, jstring arg1, __jni_impl::android::icu::util::ULocale arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstanceForSkeleton",
			"(Landroid/icu/util/Calendar;Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getInstanceForSkeleton(__jni_impl::android::icu::util::Calendar arg0, const QString &arg1, __jni_impl::android::icu::util::ULocale arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstanceForSkeleton",
			"(Landroid/icu/util/Calendar;Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getInstanceForSkeleton(__jni_impl::android::icu::util::Calendar arg0, jstring arg1, __jni_impl::java::util::Locale arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstanceForSkeleton",
			"(Landroid/icu/util/Calendar;Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getInstanceForSkeleton(__jni_impl::android::icu::util::Calendar arg0, const QString &arg1, __jni_impl::java::util::Locale arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstanceForSkeleton",
			"(Landroid/icu/util/Calendar;Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getPatternInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getPatternInstance",
			"(Ljava/lang/String;)Landroid/icu/text/DateFormat;",
			arg0
		);
	}
	QAndroidJniObject DateFormat::getPatternInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getPatternInstance",
			"(Ljava/lang/String;)Landroid/icu/text/DateFormat;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DateFormat::getPatternInstance(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getPatternInstance",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getPatternInstance(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getPatternInstance",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getPatternInstance(jstring arg0, __jni_impl::java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getPatternInstance",
			"(Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getPatternInstance(const QString &arg0, __jni_impl::java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getPatternInstance",
			"(Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormat;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getPatternInstance(__jni_impl::android::icu::util::Calendar arg0, jstring arg1, __jni_impl::android::icu::util::ULocale arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getPatternInstance",
			"(Landroid/icu/util/Calendar;Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getPatternInstance(__jni_impl::android::icu::util::Calendar arg0, const QString &arg1, __jni_impl::android::icu::util::ULocale arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getPatternInstance",
			"(Landroid/icu/util/Calendar;Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getPatternInstance(__jni_impl::android::icu::util::Calendar arg0, jstring arg1, __jni_impl::java::util::Locale arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getPatternInstance",
			"(Landroid/icu/util/Calendar;Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getPatternInstance(__jni_impl::android::icu::util::Calendar arg0, const QString &arg1, __jni_impl::java::util::Locale arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getPatternInstance",
			"(Landroid/icu/util/Calendar;Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getTimeInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getTimeInstance",
			"()Landroid/icu/text/DateFormat;"
		);
	}
	QAndroidJniObject DateFormat::getTimeInstance(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getTimeInstance",
			"(I)Landroid/icu/text/DateFormat;",
			arg0
		);
	}
	QAndroidJniObject DateFormat::getTimeInstance(__jni_impl::android::icu::util::Calendar arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getTimeInstance",
			"(Landroid/icu/util/Calendar;I)Landroid/icu/text/DateFormat;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DateFormat::getTimeInstance(jint arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getTimeInstance",
			"(ILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getTimeInstance(jint arg0, __jni_impl::java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getTimeInstance",
			"(ILjava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getTimeInstance(__jni_impl::android::icu::util::Calendar arg0, jint arg1, __jni_impl::android::icu::util::ULocale arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getTimeInstance",
			"(Landroid/icu/util/Calendar;ILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getTimeInstance(__jni_impl::android::icu::util::Calendar arg0, jint arg1, __jni_impl::java::util::Locale arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getTimeInstance",
			"(Landroid/icu/util/Calendar;ILjava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jobject DateFormat::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean DateFormat::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring DateFormat::format(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/Date;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject DateFormat::format(__jni_impl::android::icu::util::Calendar arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Landroid/icu/util/Calendar;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::format(__jni_impl::java::util::Date arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/Date;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean DateFormat::getBooleanAttribute(__jni_impl::android::icu::text::DateFormat_BooleanAttribute arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getBooleanAttribute",
			"(Landroid/icu/text/DateFormat$BooleanAttribute;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getCalendar()
	{
		return __thiz.callObjectMethod(
			"getCalendar",
			"()Landroid/icu/util/Calendar;"
		);
	}
	QAndroidJniObject DateFormat::getContext(__jni_impl::android::icu::text::DisplayContext_Type arg0)
	{
		return __thiz.callObjectMethod(
			"getContext",
			"(Landroid/icu/text/DisplayContext$Type;)Landroid/icu/text/DisplayContext;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getNumberFormat()
	{
		return __thiz.callObjectMethod(
			"getNumberFormat",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	QAndroidJniObject DateFormat::getTimeZone()
	{
		return __thiz.callObjectMethod(
			"getTimeZone",
			"()Landroid/icu/util/TimeZone;"
		);
	}
	jint DateFormat::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean DateFormat::isCalendarLenient()
	{
		return __thiz.callMethod<jboolean>(
			"isCalendarLenient",
			"()Z"
		);
	}
	jboolean DateFormat::isLenient()
	{
		return __thiz.callMethod<jboolean>(
			"isLenient",
			"()Z"
		);
	}
	QAndroidJniObject DateFormat::parse(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Ljava/util/Date;",
			arg0
		);
	}
	QAndroidJniObject DateFormat::parse(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Ljava/util/Date;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DateFormat::parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Date;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::parse(const QString &arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Date;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void DateFormat::parse(jstring arg0, __jni_impl::android::icu::util::Calendar arg1, __jni_impl::java::text::ParsePosition arg2)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/lang/String;Landroid/icu/util/Calendar;Ljava/text/ParsePosition;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void DateFormat::parse(const QString &arg0, __jni_impl::android::icu::util::Calendar arg1, __jni_impl::java::text::ParsePosition arg2)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/lang/String;Landroid/icu/util/Calendar;Ljava/text/ParsePosition;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jobject DateFormat::parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject DateFormat::parseObject(const QString &arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject DateFormat::setBooleanAttribute(__jni_impl::android::icu::text::DateFormat_BooleanAttribute arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"setBooleanAttribute",
			"(Landroid/icu/text/DateFormat$BooleanAttribute;Z)Landroid/icu/text/DateFormat;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DateFormat::setCalendar(__jni_impl::android::icu::util::Calendar arg0)
	{
		__thiz.callMethod<void>(
			"setCalendar",
			"(Landroid/icu/util/Calendar;)V",
			arg0.__jniObject().object()
		);
	}
	void DateFormat::setCalendarLenient(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCalendarLenient",
			"(Z)V",
			arg0
		);
	}
	void DateFormat::setContext(__jni_impl::android::icu::text::DisplayContext arg0)
	{
		__thiz.callMethod<void>(
			"setContext",
			"(Landroid/icu/text/DisplayContext;)V",
			arg0.__jniObject().object()
		);
	}
	void DateFormat::setLenient(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLenient",
			"(Z)V",
			arg0
		);
	}
	void DateFormat::setNumberFormat(__jni_impl::android::icu::text::NumberFormat arg0)
	{
		__thiz.callMethod<void>(
			"setNumberFormat",
			"(Landroid/icu/text/NumberFormat;)V",
			arg0.__jniObject().object()
		);
	}
	void DateFormat::setTimeZone(__jni_impl::android::icu::util::TimeZone arg0)
	{
		__thiz.callMethod<void>(
			"setTimeZone",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class DateFormat : public __jni_impl::android::icu::text::DateFormat
	{
	public:
		DateFormat(QAndroidJniObject obj) { __thiz = obj; }
		DateFormat()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

