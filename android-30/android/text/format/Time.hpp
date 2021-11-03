#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::text::format
{
	class Time : public JObject
	{
	public:
		// Fields
		static jint EPOCH_JULIAN_DAY();
		static jint FRIDAY();
		static jint HOUR();
		static jint MINUTE();
		static jint MONDAY();
		static jint MONDAY_BEFORE_JULIAN_EPOCH();
		static jint MONTH();
		static jint MONTH_DAY();
		static jint SATURDAY();
		static jint SECOND();
		static jint SUNDAY();
		static jint THURSDAY();
		static JString TIMEZONE_UTC();
		static jint TUESDAY();
		static jint WEDNESDAY();
		static jint WEEK_DAY();
		static jint WEEK_NUM();
		static jint YEAR();
		static jint YEAR_DAY();
		jboolean allDay();
		jlong gmtoff();
		jint hour();
		jint isDst();
		jint minute();
		jint month();
		jint monthDay();
		jint second();
		JString timezone();
		jint weekDay();
		jint year();
		jint yearDay();
		
		// QJniObject forward
		template<typename ...Ts> explicit Time(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Time(QJniObject obj);
		
		// Constructors
		Time();
		Time(android::text::format::Time &arg0);
		Time(JString arg0);
		
		// Methods
		static jint compare(android::text::format::Time arg0, android::text::format::Time arg1);
		static JString getCurrentTimezone();
		static jint getJulianDay(jlong arg0, jlong arg1);
		static jint getJulianMondayFromWeeksSinceEpoch(jint arg0);
		static jint getWeeksSinceEpochFromJulianDay(jint arg0, jint arg1);
		static jboolean isEpoch(android::text::format::Time arg0);
		jboolean after(android::text::format::Time arg0) const;
		jboolean before(android::text::format::Time arg0) const;
		void clear(JString arg0) const;
		JString format(JString arg0) const;
		JString format2445() const;
		JString format3339(jboolean arg0) const;
		jint getActualMaximum(jint arg0) const;
		jint getWeekNumber() const;
		jlong normalize(jboolean arg0) const;
		jboolean parse(JString arg0) const;
		jboolean parse3339(JString arg0) const;
		void set(android::text::format::Time arg0) const;
		void set(jlong arg0) const;
		void set(jint arg0, jint arg1, jint arg2) const;
		void set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const;
		jlong setJulianDay(jint arg0) const;
		void setToNow() const;
		void switchTimezone(JString arg0) const;
		jlong toMillis(jboolean arg0) const;
		JString toString() const;
	};
} // namespace android::text::format

