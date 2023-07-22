#pragma once

#include "./Calendar.def.hpp"

class JArray;
namespace android::icu::text
{
	class DateFormat;
}
namespace android::icu::util
{
	class TimeZone;
}
namespace android::icu::util
{
	class ULocale;
}
class JString;
namespace java::util
{
	class Date;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::util
{
	class ChineseCalendar : public android::icu::util::Calendar
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ChineseCalendar(const char *className, const char *sig, Ts...agv) : android::icu::util::Calendar(className, sig, std::forward<Ts>(agv)...) {}
		ChineseCalendar(QJniObject obj) : android::icu::util::Calendar(obj) {}
		
		// Constructors
		ChineseCalendar();
		ChineseCalendar(android::icu::util::TimeZone arg0);
		ChineseCalendar(android::icu::util::ULocale arg0);
		ChineseCalendar(java::util::Date arg0);
		ChineseCalendar(java::util::Locale arg0);
		ChineseCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1);
		ChineseCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1);
		ChineseCalendar(jint arg0, jint arg1, jint arg2, jint arg3);
		ChineseCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		ChineseCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		ChineseCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7);
		
		// Methods
		void add(jint arg0, jint arg1) const;
		JString getType() const;
		void roll(jint arg0, jint arg1) const;
	};
} // namespace android::icu::util

