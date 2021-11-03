#pragma once

#include "./GregorianCalendar.hpp"

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
	class TaiwanCalendar : public android::icu::util::GregorianCalendar
	{
	public:
		// Fields
		static jint BEFORE_MINGUO();
		static jint MINGUO();
		
		// QJniObject forward
		template<typename ...Ts> explicit TaiwanCalendar(const char *className, const char *sig, Ts...agv) : android::icu::util::GregorianCalendar(className, sig, std::forward<Ts>(agv)...) {}
		TaiwanCalendar(QJniObject obj);
		
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
		JString getType();
	};
} // namespace android::icu::util

