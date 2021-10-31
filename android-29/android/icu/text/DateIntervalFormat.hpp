#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/Format.hpp"
#include "./UFormat.hpp"

namespace android::icu::text
{
	class DateFormat;
}
namespace android::icu::text
{
	class DateIntervalInfo;
}
namespace android::icu::util
{
	class Calendar;
}
namespace android::icu::util
{
	class DateInterval;
}
namespace android::icu::util
{
	class TimeZone;
}
namespace android::icu::util
{
	class ULocale;
}
namespace java::lang
{
	class StringBuffer;
}
namespace java::text
{
	class FieldPosition;
}
namespace java::text
{
	class ParsePosition;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class DateIntervalFormat : public android::icu::text::UFormat
	{
	public:
		// Fields
		
		DateIntervalFormat(QAndroidJniObject obj);
		// Constructors
		DateIntervalFormat() = default;
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(jstring arg0, android::icu::text::DateIntervalInfo arg1);
		static QAndroidJniObject getInstance(jstring arg0, android::icu::util::ULocale arg1);
		static QAndroidJniObject getInstance(jstring arg0, java::util::Locale arg1);
		static QAndroidJniObject getInstance(jstring arg0, android::icu::util::ULocale arg1, android::icu::text::DateIntervalInfo arg2);
		static QAndroidJniObject getInstance(jstring arg0, java::util::Locale arg1, android::icu::text::DateIntervalInfo arg2);
		jobject clone();
		QAndroidJniObject format(android::icu::util::DateInterval arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject format(android::icu::util::Calendar arg0, android::icu::util::Calendar arg1, java::lang::StringBuffer arg2, java::text::FieldPosition arg3);
		QAndroidJniObject getDateFormat();
		QAndroidJniObject getDateIntervalInfo();
		QAndroidJniObject getTimeZone();
		jobject parseObject(jstring arg0, java::text::ParsePosition arg1);
		void setDateIntervalInfo(android::icu::text::DateIntervalInfo arg0);
		void setTimeZone(android::icu::util::TimeZone arg0);
	};
} // namespace android::icu::text

