#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
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
	class DateUtils : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ABBREV_MONTH_FORMAT();
		static jstring ABBREV_WEEKDAY_FORMAT();
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
		static jstring HOUR_MINUTE_24();
		static jint LENGTH_LONG();
		static jint LENGTH_MEDIUM();
		static jint LENGTH_SHORT();
		static jint LENGTH_SHORTER();
		static jint LENGTH_SHORTEST();
		static jlong MINUTE_IN_MILLIS();
		static jstring MONTH_DAY_FORMAT();
		static jstring MONTH_FORMAT();
		static jstring NUMERIC_MONTH_FORMAT();
		static jlong SECOND_IN_MILLIS();
		static jstring WEEKDAY_FORMAT();
		static jlong WEEK_IN_MILLIS();
		static jstring YEAR_FORMAT();
		static jstring YEAR_FORMAT_TWO_DIGITS();
		static jlong YEAR_IN_MILLIS();
		static jintArray sameMonthTable();
		static jintArray sameYearTable();
		
		// QJniObject forward
		template<typename ...Ts> explicit DateUtils(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DateUtils(QJniObject obj);
		
		// Constructors
		DateUtils();
		
		// Methods
		static jstring formatDateRange(android::content::Context arg0, jlong arg1, jlong arg2, jint arg3);
		static java::util::Formatter formatDateRange(android::content::Context arg0, java::util::Formatter arg1, jlong arg2, jlong arg3, jint arg4);
		static java::util::Formatter formatDateRange(android::content::Context arg0, java::util::Formatter arg1, jlong arg2, jlong arg3, jint arg4, jstring arg5);
		static jstring formatDateTime(android::content::Context arg0, jlong arg1, jint arg2);
		static jstring formatElapsedTime(jlong arg0);
		static jstring formatElapsedTime(java::lang::StringBuilder arg0, jlong arg1);
		static jstring formatSameDayTime(jlong arg0, jlong arg1, jint arg2, jint arg3);
		static jstring getAMPMString(jint arg0);
		static jstring getDayOfWeekString(jint arg0, jint arg1);
		static jstring getMonthString(jint arg0, jint arg1);
		static jstring getRelativeDateTimeString(android::content::Context arg0, jlong arg1, jlong arg2, jlong arg3, jint arg4);
		static jstring getRelativeTimeSpanString(jlong arg0);
		static jstring getRelativeTimeSpanString(android::content::Context arg0, jlong arg1);
		static jstring getRelativeTimeSpanString(android::content::Context arg0, jlong arg1, jboolean arg2);
		static jstring getRelativeTimeSpanString(jlong arg0, jlong arg1, jlong arg2);
		static jstring getRelativeTimeSpanString(jlong arg0, jlong arg1, jlong arg2, jint arg3);
		static jboolean isToday(jlong arg0);
	};
} // namespace android::text::format

