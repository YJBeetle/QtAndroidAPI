#pragma once

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
class JObject;
class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateIntervalFormat(const char *className, const char *sig, Ts...agv) : android::icu::text::UFormat(className, sig, std::forward<Ts>(agv)...) {}
		DateIntervalFormat(QAndroidJniObject obj) : android::icu::text::UFormat(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::DateIntervalFormat getInstance(JString arg0);
		static android::icu::text::DateIntervalFormat getInstance(JString arg0, android::icu::text::DateIntervalInfo arg1);
		static android::icu::text::DateIntervalFormat getInstance(JString arg0, android::icu::util::ULocale arg1);
		static android::icu::text::DateIntervalFormat getInstance(JString arg0, java::util::Locale arg1);
		static android::icu::text::DateIntervalFormat getInstance(JString arg0, android::icu::util::ULocale arg1, android::icu::text::DateIntervalInfo arg2);
		static android::icu::text::DateIntervalFormat getInstance(JString arg0, java::util::Locale arg1, android::icu::text::DateIntervalInfo arg2);
		JObject clone() const;
		java::lang::StringBuffer format(android::icu::util::DateInterval arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::lang::StringBuffer format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::lang::StringBuffer format(android::icu::util::Calendar arg0, android::icu::util::Calendar arg1, java::lang::StringBuffer arg2, java::text::FieldPosition arg3) const;
		android::icu::text::DateFormat getDateFormat() const;
		android::icu::text::DateIntervalInfo getDateIntervalInfo() const;
		android::icu::util::TimeZone getTimeZone() const;
		JObject parseObject(JString arg0, java::text::ParsePosition arg1) const;
		void setDateIntervalInfo(android::icu::text::DateIntervalInfo arg0) const;
		void setTimeZone(android::icu::util::TimeZone arg0) const;
	};
} // namespace android::icu::text

