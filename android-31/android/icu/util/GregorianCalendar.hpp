#pragma once

#include "./Calendar.hpp"

namespace android::icu::util
{
	class Calendar;
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
	class GregorianCalendar : public android::icu::util::Calendar
	{
	public:
		// Fields
		static jint AD();
		static jint BC();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GregorianCalendar(const char *className, const char *sig, Ts...agv) : android::icu::util::Calendar(className, sig, std::forward<Ts>(agv)...) {}
		GregorianCalendar(QAndroidJniObject obj);
		
		// Constructors
		GregorianCalendar();
		GregorianCalendar(android::icu::util::TimeZone arg0);
		GregorianCalendar(android::icu::util::ULocale arg0);
		GregorianCalendar(java::util::Locale arg0);
		GregorianCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1);
		GregorianCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1);
		GregorianCalendar(jint arg0, jint arg1, jint arg2);
		GregorianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		GregorianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		jint getActualMaximum(jint arg0);
		jint getActualMinimum(jint arg0);
		java::util::Date getGregorianChange();
		JString getType();
		jint hashCode();
		jboolean isEquivalentTo(android::icu::util::Calendar arg0);
		jboolean isLeapYear(jint arg0);
		void roll(jint arg0, jint arg1);
		void setGregorianChange(java::util::Date arg0);
	};
} // namespace android::icu::util

