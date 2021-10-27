#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Calendar.hpp"

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
	class CopticCalendar : public android::icu::util::Calendar
	{
	public:
		// Fields
		static jint AMSHIR();
		static jint BABA();
		static jint BARAMHAT();
		static jint BARAMOUDA();
		static jint BASHANS();
		static jint EPEP();
		static jint HATOR();
		static jint KIAHK();
		static jint MESRA();
		static jint NASIE();
		static jint PAONA();
		static jint TOBA();
		static jint TOUT();
		
		CopticCalendar(QAndroidJniObject obj);
		// Constructors
		CopticCalendar();
		CopticCalendar(android::icu::util::TimeZone &arg0);
		CopticCalendar(android::icu::util::ULocale &arg0);
		CopticCalendar(java::util::Date &arg0);
		CopticCalendar(java::util::Locale &arg0);
		CopticCalendar(android::icu::util::TimeZone &arg0, android::icu::util::ULocale &arg1);
		CopticCalendar(android::icu::util::TimeZone &arg0, java::util::Locale &arg1);
		CopticCalendar(jint &arg0, jint &arg1, jint &arg2);
		CopticCalendar(jint &arg0, jint &arg1, jint &arg2, jint &arg3, jint &arg4, jint &arg5);
		
		// Methods
		jstring getType();
	};
} // namespace android::icu::util

