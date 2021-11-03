#pragma once

#include "../../../JObject.hpp"
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
		static jint HEISEI();
		static jint MEIJI();
		static jint REIWA();
		static jint SHOWA();
		static jint TAISHO();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JapaneseCalendar(const char *className, const char *sig, Ts...agv) : android::icu::util::GregorianCalendar(className, sig, std::forward<Ts>(agv)...) {}
		JapaneseCalendar(QAndroidJniObject obj);
		
		// Constructors
		JapaneseCalendar();
		JapaneseCalendar(android::icu::util::TimeZone arg0);
		JapaneseCalendar(android::icu::util::ULocale arg0);
		JapaneseCalendar(java::util::Date arg0);
		JapaneseCalendar(java::util::Locale arg0);
		JapaneseCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1);
		JapaneseCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1);
		JapaneseCalendar(jint arg0, jint arg1, jint arg2);
		JapaneseCalendar(jint arg0, jint arg1, jint arg2, jint arg3);
		JapaneseCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		jint getActualMaximum(jint arg0);
		jstring getType();
	};
} // namespace android::icu::util

