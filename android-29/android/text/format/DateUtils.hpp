#pragma once

#include "../../../JObject.hpp"

class JIntArray;
namespace android::content
{
	class Context;
}
class JString;
class JString;
namespace java::lang
{
	class StringBuilder;
}
namespace java::util
{
	class Formatter;
}

namespace android::text::format
{
	class DateUtils : public JObject
	{
	public:
		// Fields
		static JString ABBREV_MONTH_FORMAT();
		static JString ABBREV_WEEKDAY_FORMAT();
		static jlong DAY_IN_MILLIS();
		static jint FORMAT_12HOUR();
		static jint FORMAT_24HOUR();
		static jint FORMAT_ABBREV_ALL();
		static jint FORMAT_ABBREV_MONTH();
		static jint FORMAT_ABBREV_RELATIVE();
		static jint FORMAT_ABBREV_TIME();
		static jint FORMAT_ABBREV_WEEKDAY();
		static jint FORMAT_CAP_AMPM();
		static jint FORMAT_CAP_MIDNIGHT();
		static jint FORMAT_CAP_NOON();
		static jint FORMAT_CAP_NOON_MIDNIGHT();
		static jint FORMAT_NO_MIDNIGHT();
		static jint FORMAT_NO_MONTH_DAY();
		static jint FORMAT_NO_NOON();
		static jint FORMAT_NO_NOON_MIDNIGHT();
		static jint FORMAT_NO_YEAR();
		static jint FORMAT_NUMERIC_DATE();
		static jint FORMAT_SHOW_DATE();
		static jint FORMAT_SHOW_TIME();
		static jint FORMAT_SHOW_WEEKDAY();
		static jint FORMAT_SHOW_YEAR();
		static jint FORMAT_UTC();
		static jlong HOUR_IN_MILLIS();
		static JString HOUR_MINUTE_24();
		static jint LENGTH_LONG();
		static jint LENGTH_MEDIUM();
		static jint LENGTH_SHORT();
		static jint LENGTH_SHORTER();
		static jint LENGTH_SHORTEST();
		static jlong MINUTE_IN_MILLIS();
		static JString MONTH_DAY_FORMAT();
		static JString MONTH_FORMAT();
		static JString NUMERIC_MONTH_FORMAT();
		static jlong SECOND_IN_MILLIS();
		static JString WEEKDAY_FORMAT();
		static jlong WEEK_IN_MILLIS();
		static JString YEAR_FORMAT();
		static JString YEAR_FORMAT_TWO_DIGITS();
		static jlong YEAR_IN_MILLIS();
		static JIntArray sameMonthTable();
		static JIntArray sameYearTable();
		
		// QJniObject forward
		template<typename ...Ts> explicit DateUtils(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DateUtils(QJniObject obj);
		
		// Constructors
		DateUtils();
		
		// Methods
		static JString formatDateRange(android::content::Context arg0, jlong arg1, jlong arg2, jint arg3);
		static java::util::Formatter formatDateRange(android::content::Context arg0, java::util::Formatter arg1, jlong arg2, jlong arg3, jint arg4);
		static java::util::Formatter formatDateRange(android::content::Context arg0, java::util::Formatter arg1, jlong arg2, jlong arg3, jint arg4, JString arg5);
		static JString formatDateTime(android::content::Context arg0, jlong arg1, jint arg2);
		static JString formatElapsedTime(jlong arg0);
		static JString formatElapsedTime(java::lang::StringBuilder arg0, jlong arg1);
		static JString formatSameDayTime(jlong arg0, jlong arg1, jint arg2, jint arg3);
		static JString getAMPMString(jint arg0);
		static JString getDayOfWeekString(jint arg0, jint arg1);
		static JString getMonthString(jint arg0, jint arg1);
		static JString getRelativeDateTimeString(android::content::Context arg0, jlong arg1, jlong arg2, jlong arg3, jint arg4);
		static JString getRelativeTimeSpanString(jlong arg0);
		static JString getRelativeTimeSpanString(android::content::Context arg0, jlong arg1);
		static JString getRelativeTimeSpanString(android::content::Context arg0, jlong arg1, jboolean arg2);
		static JString getRelativeTimeSpanString(jlong arg0, jlong arg1, jlong arg2);
		static JString getRelativeTimeSpanString(jlong arg0, jlong arg1, jlong arg2, jint arg3);
		static jboolean isToday(jlong arg0);
	};
} // namespace android::text::format

