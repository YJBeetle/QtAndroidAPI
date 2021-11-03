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
	class EthiopicCalendar : public android::icu::util::Calendar
	{
	public:
		// Fields
		static jint GENBOT();
		static jint HAMLE();
		static jint HEDAR();
		static jint MEGABIT();
		static jint MESKEREM();
		static jint MIAZIA();
		static jint NEHASSE();
		static jint PAGUMEN();
		static jint SENE();
		static jint TAHSAS();
		static jint TEKEMT();
		static jint TER();
		static jint YEKATIT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EthiopicCalendar(const char *className, const char *sig, Ts...agv) : android::icu::util::Calendar(className, sig, std::forward<Ts>(agv)...) {}
		EthiopicCalendar(QAndroidJniObject obj);
		
		// Constructors
		EthiopicCalendar();
		EthiopicCalendar(android::icu::util::TimeZone arg0);
		EthiopicCalendar(android::icu::util::ULocale arg0);
		EthiopicCalendar(java::util::Date arg0);
		EthiopicCalendar(java::util::Locale arg0);
		EthiopicCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1);
		EthiopicCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1);
		EthiopicCalendar(jint arg0, jint arg1, jint arg2);
		EthiopicCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		JString getType();
		jboolean isAmeteAlemEra();
		void setAmeteAlemEra(jboolean arg0);
	};
} // namespace android::icu::util

