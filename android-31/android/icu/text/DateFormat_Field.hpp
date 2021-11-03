#pragma once

#include "../../../JObject.hpp"
#include "../../../java/text/AttributedCharacterIterator_Attribute.hpp"
#include "../../../java/text/Format_Field.hpp"


namespace android::icu::text
{
	class DateFormat_Field : public java::text::Format_Field
	{
	public:
		// Fields
		static android::icu::text::DateFormat_Field AM_PM();
		static android::icu::text::DateFormat_Field AM_PM_MIDNIGHT_NOON();
		static android::icu::text::DateFormat_Field DAY_OF_MONTH();
		static android::icu::text::DateFormat_Field DAY_OF_WEEK();
		static android::icu::text::DateFormat_Field DAY_OF_WEEK_IN_MONTH();
		static android::icu::text::DateFormat_Field DAY_OF_YEAR();
		static android::icu::text::DateFormat_Field DOW_LOCAL();
		static android::icu::text::DateFormat_Field ERA();
		static android::icu::text::DateFormat_Field EXTENDED_YEAR();
		static android::icu::text::DateFormat_Field FLEXIBLE_DAY_PERIOD();
		static android::icu::text::DateFormat_Field HOUR0();
		static android::icu::text::DateFormat_Field HOUR1();
		static android::icu::text::DateFormat_Field HOUR_OF_DAY0();
		static android::icu::text::DateFormat_Field HOUR_OF_DAY1();
		static android::icu::text::DateFormat_Field JULIAN_DAY();
		static android::icu::text::DateFormat_Field MILLISECOND();
		static android::icu::text::DateFormat_Field MILLISECONDS_IN_DAY();
		static android::icu::text::DateFormat_Field MINUTE();
		static android::icu::text::DateFormat_Field MONTH();
		static android::icu::text::DateFormat_Field QUARTER();
		static android::icu::text::DateFormat_Field SECOND();
		static android::icu::text::DateFormat_Field TIME_ZONE();
		static android::icu::text::DateFormat_Field WEEK_OF_MONTH();
		static android::icu::text::DateFormat_Field WEEK_OF_YEAR();
		static android::icu::text::DateFormat_Field YEAR();
		static android::icu::text::DateFormat_Field YEAR_WOY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateFormat_Field(const char *className, const char *sig, Ts...agv) : java::text::Format_Field(className, sig, std::forward<Ts>(agv)...) {}
		DateFormat_Field(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::DateFormat_Field ofCalendarField(jint arg0);
		jint getCalendarField();
	};
} // namespace android::icu::text

