#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Calendar.hpp"

namespace android::icu::util
{
	class IslamicCalendar_CalculationType;
}
namespace android::icu::util
{
	class TimeZone;
}
namespace android::icu::util
{
	class ULocale;
}
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
	class IslamicCalendar : public android::icu::util::Calendar
	{
	public:
		// Fields
		static jint DHU_AL_HIJJAH();
		static jint DHU_AL_QIDAH();
		static jint JUMADA_1();
		static jint JUMADA_2();
		static jint MUHARRAM();
		static jint RABI_1();
		static jint RABI_2();
		static jint RAJAB();
		static jint RAMADAN();
		static jint SAFAR();
		static jint SHABAN();
		static jint SHAWWAL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IslamicCalendar(const char *className, const char *sig, Ts...agv) : android::icu::util::Calendar(className, sig, std::forward<Ts>(agv)...) {}
		IslamicCalendar(QAndroidJniObject obj);
		
		// Constructors
		IslamicCalendar();
		IslamicCalendar(android::icu::util::TimeZone arg0);
		IslamicCalendar(android::icu::util::ULocale arg0);
		IslamicCalendar(java::util::Date arg0);
		IslamicCalendar(java::util::Locale arg0);
		IslamicCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1);
		IslamicCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1);
		IslamicCalendar(jint arg0, jint arg1, jint arg2);
		IslamicCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		android::icu::util::IslamicCalendar_CalculationType getCalculationType();
		jstring getType();
		void setCalculationType(android::icu::util::IslamicCalendar_CalculationType arg0);
	};
} // namespace android::icu::util

