#pragma once

#include "../../__JniBaseClass.hpp"

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
	class Calendar_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Calendar_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Calendar_Builder(QJniObject obj);
		
		// Constructors
		Calendar_Builder();
		
		// Methods
		java::util::Calendar build();
		java::util::Calendar_Builder set(jint arg0, jint arg1);
		java::util::Calendar_Builder setCalendarType(jstring arg0);
		java::util::Calendar_Builder setDate(jint arg0, jint arg1, jint arg2);
		java::util::Calendar_Builder setFields(jintArray arg0);
		java::util::Calendar_Builder setInstant(java::util::Date arg0);
		java::util::Calendar_Builder setInstant(jlong arg0);
		java::util::Calendar_Builder setLenient(jboolean arg0);
		java::util::Calendar_Builder setLocale(java::util::Locale arg0);
		java::util::Calendar_Builder setTimeOfDay(jint arg0, jint arg1, jint arg2);
		java::util::Calendar_Builder setTimeOfDay(jint arg0, jint arg1, jint arg2, jint arg3);
		java::util::Calendar_Builder setTimeZone(java::util::TimeZone arg0);
		java::util::Calendar_Builder setWeekDate(jint arg0, jint arg1, jint arg2);
		java::util::Calendar_Builder setWeekDefinition(jint arg0, jint arg1);
	};
} // namespace java::util

