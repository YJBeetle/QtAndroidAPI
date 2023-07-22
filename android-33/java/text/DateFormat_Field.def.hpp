#pragma once

#include "./Format_Field.def.hpp"

class JArray;
class JObject;
class JString;

namespace java::text
{
	class DateFormat_Field : public java::text::Format_Field
	{
	public:
		// Fields
		static java::text::DateFormat_Field AM_PM();
		static java::text::DateFormat_Field DAY_OF_MONTH();
		static java::text::DateFormat_Field DAY_OF_WEEK();
		static java::text::DateFormat_Field DAY_OF_WEEK_IN_MONTH();
		static java::text::DateFormat_Field DAY_OF_YEAR();
		static java::text::DateFormat_Field ERA();
		static java::text::DateFormat_Field HOUR0();
		static java::text::DateFormat_Field HOUR1();
		static java::text::DateFormat_Field HOUR_OF_DAY0();
		static java::text::DateFormat_Field HOUR_OF_DAY1();
		static java::text::DateFormat_Field MILLISECOND();
		static java::text::DateFormat_Field MINUTE();
		static java::text::DateFormat_Field MONTH();
		static java::text::DateFormat_Field SECOND();
		static java::text::DateFormat_Field TIME_ZONE();
		static java::text::DateFormat_Field WEEK_OF_MONTH();
		static java::text::DateFormat_Field WEEK_OF_YEAR();
		static java::text::DateFormat_Field YEAR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateFormat_Field(const char *className, const char *sig, Ts...agv) : java::text::Format_Field(className, sig, std::forward<Ts>(agv)...) {}
		DateFormat_Field(QAndroidJniObject obj) : java::text::Format_Field(obj) {}
		
		// Constructors
		
		// Methods
		static java::text::DateFormat_Field ofCalendarField(jint arg0);
		jint getCalendarField() const;
	};
} // namespace java::text

