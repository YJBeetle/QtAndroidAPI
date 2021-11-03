#pragma once

#include "./Calendar.hpp"

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
	class IndianCalendar : public android::icu::util::Calendar
	{
	public:
		// Fields
		static jint AGRAHAYANA();
		static jint ASADHA();
		static jint ASVINA();
		static jint BHADRA();
		static jint CHAITRA();
		static jint IE();
		static jint JYAISTHA();
		static jint KARTIKA();
		static jint MAGHA();
		static jint PAUSA();
		static jint PHALGUNA();
		static jint SRAVANA();
		static jint VAISAKHA();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IndianCalendar(const char *className, const char *sig, Ts...agv) : android::icu::util::Calendar(className, sig, std::forward<Ts>(agv)...) {}
		IndianCalendar(QAndroidJniObject obj);
		
		// Constructors
		IndianCalendar();
		IndianCalendar(android::icu::util::TimeZone arg0);
		IndianCalendar(android::icu::util::ULocale arg0);
		IndianCalendar(java::util::Date arg0);
		IndianCalendar(java::util::Locale arg0);
		IndianCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1);
		IndianCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1);
		IndianCalendar(jint arg0, jint arg1, jint arg2);
		IndianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		JString getType() const;
	};
} // namespace android::icu::util

