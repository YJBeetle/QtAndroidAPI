#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JString;
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
namespace java::util
{
	class TimeZone;
}

namespace java::util
{
	class Calendar_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Calendar_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Calendar_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Calendar_Builder();
		
		// Methods
		java::util::Calendar build() const;
		java::util::Calendar_Builder set(jint arg0, jint arg1) const;
		java::util::Calendar_Builder setCalendarType(JString arg0) const;
		java::util::Calendar_Builder setDate(jint arg0, jint arg1, jint arg2) const;
		java::util::Calendar_Builder setFields(JIntArray arg0) const;
		java::util::Calendar_Builder setInstant(java::util::Date arg0) const;
		java::util::Calendar_Builder setInstant(jlong arg0) const;
		java::util::Calendar_Builder setLenient(jboolean arg0) const;
		java::util::Calendar_Builder setLocale(java::util::Locale arg0) const;
		java::util::Calendar_Builder setTimeOfDay(jint arg0, jint arg1, jint arg2) const;
		java::util::Calendar_Builder setTimeOfDay(jint arg0, jint arg1, jint arg2, jint arg3) const;
		java::util::Calendar_Builder setTimeZone(java::util::TimeZone arg0) const;
		java::util::Calendar_Builder setWeekDate(jint arg0, jint arg1, jint arg2) const;
		java::util::Calendar_Builder setWeekDefinition(jint arg0, jint arg1) const;
	};
} // namespace java::util

