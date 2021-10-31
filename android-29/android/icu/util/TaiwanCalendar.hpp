#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Calendar.hpp"
#include "./GregorianCalendar.hpp"

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
	class TaiwanCalendar : public android::icu::util::GregorianCalendar
	{
	public:
		// Fields
		static jint BEFORE_MINGUO();
		static jint MINGUO();
		
		TaiwanCalendar(QAndroidJniObject obj);
		// Constructors
		TaiwanCalendar();
		TaiwanCalendar(android::icu::util::TimeZone arg0);
		TaiwanCalendar(android::icu::util::ULocale arg0);
		TaiwanCalendar(java::util::Date arg0);
		TaiwanCalendar(java::util::Locale arg0);
		TaiwanCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1);
		TaiwanCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1);
		TaiwanCalendar(jint arg0, jint arg1, jint arg2);
		TaiwanCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		jstring getType();
	};
} // namespace android::icu::util

