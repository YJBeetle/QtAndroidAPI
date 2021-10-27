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
	class JapaneseCalendar : public android::icu::util::GregorianCalendar
	{
	public:
		// Fields
		static jint CURRENT_ERA();
		static jint HEISEI();
		static jint MEIJI();
		static jint SHOWA();
		static jint TAISHO();
		
		JapaneseCalendar(QAndroidJniObject obj);
		// Constructors
		JapaneseCalendar();
		JapaneseCalendar(android::icu::util::TimeZone &arg0);
		JapaneseCalendar(android::icu::util::ULocale &arg0);
		JapaneseCalendar(java::util::Date &arg0);
		JapaneseCalendar(java::util::Locale &arg0);
		JapaneseCalendar(android::icu::util::TimeZone &arg0, android::icu::util::ULocale &arg1);
		JapaneseCalendar(android::icu::util::TimeZone &arg0, java::util::Locale &arg1);
		JapaneseCalendar(jint &arg0, jint &arg1, jint &arg2);
		JapaneseCalendar(jint &arg0, jint &arg1, jint &arg2, jint &arg3);
		JapaneseCalendar(jint &arg0, jint &arg1, jint &arg2, jint &arg3, jint &arg4, jint &arg5);
		
		// Methods
		jint getActualMaximum(jint arg0);
		jstring getType();
	};
} // namespace android::icu::util

