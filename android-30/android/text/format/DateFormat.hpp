#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace java::text
{
	class DateFormat;
}
namespace java::util
{
	class Calendar;
}
namespace java::util
{
	class Date;
}
namespace java::util
{
	class Locale;
}

namespace android::text::format
{
	class DateFormat : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DateFormat(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DateFormat(QJniObject obj);
		
		// Constructors
		DateFormat();
		
		// Methods
		static jstring format(jstring arg0, java::util::Calendar arg1);
		static jstring format(jstring arg0, java::util::Date arg1);
		static jstring format(jstring arg0, jlong arg1);
		static jstring getBestDateTimePattern(java::util::Locale arg0, jstring arg1);
		static java::text::DateFormat getDateFormat(android::content::Context arg0);
		static jcharArray getDateFormatOrder(android::content::Context arg0);
		static java::text::DateFormat getLongDateFormat(android::content::Context arg0);
		static java::text::DateFormat getMediumDateFormat(android::content::Context arg0);
		static java::text::DateFormat getTimeFormat(android::content::Context arg0);
		static jboolean is24HourFormat(android::content::Context arg0);
	};
} // namespace android::text::format

