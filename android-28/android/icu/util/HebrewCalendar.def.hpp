#pragma once

#include "./Calendar.def.hpp"

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
	class HebrewCalendar : public android::icu::util::Calendar
	{
	public:
		// Fields
		static jint ADAR();
		static jint ADAR_1();
		static jint AV();
		static jint ELUL();
		static jint HESHVAN();
		static jint IYAR();
		static jint KISLEV();
		static jint NISAN();
		static jint SHEVAT();
		static jint SIVAN();
		static jint TAMUZ();
		static jint TEVET();
		static jint TISHRI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HebrewCalendar(const char *className, const char *sig, Ts...agv) : android::icu::util::Calendar(className, sig, std::forward<Ts>(agv)...) {}
		HebrewCalendar(QAndroidJniObject obj) : android::icu::util::Calendar(obj) {}
		
		// Constructors
		HebrewCalendar();
		HebrewCalendar(android::icu::util::TimeZone arg0);
		HebrewCalendar(android::icu::util::ULocale arg0);
		HebrewCalendar(java::util::Date arg0);
		HebrewCalendar(java::util::Locale arg0);
		HebrewCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1);
		HebrewCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1);
		HebrewCalendar(jint arg0, jint arg1, jint arg2);
		HebrewCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		void add(jint arg0, jint arg1) const;
		JString getType() const;
		void roll(jint arg0, jint arg1) const;
	};
} // namespace android::icu::util

