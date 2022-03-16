#pragma once

#include "../../../JObject.hpp"

class JCharArray;
namespace android::content
{
	class Context;
}
class JString;
class JString;
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
	class DateFormat : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DateFormat(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DateFormat(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DateFormat();
		
		// Methods
		static JString format(JString arg0, java::util::Calendar arg1);
		static JString format(JString arg0, java::util::Date arg1);
		static JString format(JString arg0, jlong arg1);
		static JString getBestDateTimePattern(java::util::Locale arg0, JString arg1);
		static java::text::DateFormat getDateFormat(android::content::Context arg0);
		static JCharArray getDateFormatOrder(android::content::Context arg0);
		static java::text::DateFormat getLongDateFormat(android::content::Context arg0);
		static java::text::DateFormat getMediumDateFormat(android::content::Context arg0);
		static java::text::DateFormat getTimeFormat(android::content::Context arg0);
		static jboolean is24HourFormat(android::content::Context arg0);
	};
} // namespace android::text::format

