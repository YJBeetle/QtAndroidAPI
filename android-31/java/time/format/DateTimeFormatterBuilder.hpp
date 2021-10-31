#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::time
{
	class ZoneId;
}
namespace java::time::format
{
	class DateTimeFormatter;
}
namespace java::time::format
{
	class FormatStyle;
}
namespace java::time::format
{
	class ResolverStyle;
}
namespace java::time::format
{
	class SignStyle;
}
namespace java::time::format
{
	class TextStyle;
}
namespace java::util
{
	class Locale;
}

namespace java::time::format
{
	class DateTimeFormatterBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateTimeFormatterBuilder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DateTimeFormatterBuilder(QAndroidJniObject obj);
		
		// Constructors
		DateTimeFormatterBuilder();
		
		// Methods
		static jstring getLocalizedDateTimePattern(java::time::format::FormatStyle arg0, java::time::format::FormatStyle arg1, __JniBaseClass arg2, java::util::Locale arg3);
		java::time::format::DateTimeFormatterBuilder append(java::time::format::DateTimeFormatter arg0);
		java::time::format::DateTimeFormatterBuilder appendChronologyId();
		java::time::format::DateTimeFormatterBuilder appendChronologyText(java::time::format::TextStyle arg0);
		java::time::format::DateTimeFormatterBuilder appendDayPeriodText(java::time::format::TextStyle arg0);
		java::time::format::DateTimeFormatterBuilder appendFraction(__JniBaseClass arg0, jint arg1, jint arg2, jboolean arg3);
		java::time::format::DateTimeFormatterBuilder appendGenericZoneText(java::time::format::TextStyle arg0);
		java::time::format::DateTimeFormatterBuilder appendGenericZoneText(java::time::format::TextStyle arg0, __JniBaseClass arg1);
		java::time::format::DateTimeFormatterBuilder appendInstant();
		java::time::format::DateTimeFormatterBuilder appendInstant(jint arg0);
		java::time::format::DateTimeFormatterBuilder appendLiteral(jchar arg0);
		java::time::format::DateTimeFormatterBuilder appendLiteral(jstring arg0);
		java::time::format::DateTimeFormatterBuilder appendLocalized(java::time::format::FormatStyle arg0, java::time::format::FormatStyle arg1);
		java::time::format::DateTimeFormatterBuilder appendLocalizedOffset(java::time::format::TextStyle arg0);
		java::time::format::DateTimeFormatterBuilder appendOffset(jstring arg0, jstring arg1);
		java::time::format::DateTimeFormatterBuilder appendOffsetId();
		java::time::format::DateTimeFormatterBuilder appendOptional(java::time::format::DateTimeFormatter arg0);
		java::time::format::DateTimeFormatterBuilder appendPattern(jstring arg0);
		java::time::format::DateTimeFormatterBuilder appendText(__JniBaseClass arg0);
		java::time::format::DateTimeFormatterBuilder appendText(__JniBaseClass arg0, java::time::format::TextStyle arg1);
		java::time::format::DateTimeFormatterBuilder appendText(__JniBaseClass arg0, __JniBaseClass arg1);
		java::time::format::DateTimeFormatterBuilder appendValue(__JniBaseClass arg0);
		java::time::format::DateTimeFormatterBuilder appendValue(__JniBaseClass arg0, jint arg1);
		java::time::format::DateTimeFormatterBuilder appendValue(__JniBaseClass arg0, jint arg1, jint arg2, java::time::format::SignStyle arg3);
		java::time::format::DateTimeFormatterBuilder appendValueReduced(__JniBaseClass arg0, jint arg1, jint arg2, jint arg3);
		java::time::format::DateTimeFormatterBuilder appendValueReduced(__JniBaseClass arg0, jint arg1, jint arg2, __JniBaseClass arg3);
		java::time::format::DateTimeFormatterBuilder appendZoneId();
		java::time::format::DateTimeFormatterBuilder appendZoneOrOffsetId();
		java::time::format::DateTimeFormatterBuilder appendZoneRegionId();
		java::time::format::DateTimeFormatterBuilder appendZoneText(java::time::format::TextStyle arg0);
		java::time::format::DateTimeFormatterBuilder appendZoneText(java::time::format::TextStyle arg0, __JniBaseClass arg1);
		java::time::format::DateTimeFormatterBuilder optionalEnd();
		java::time::format::DateTimeFormatterBuilder optionalStart();
		java::time::format::DateTimeFormatterBuilder padNext(jint arg0);
		java::time::format::DateTimeFormatterBuilder padNext(jint arg0, jchar arg1);
		java::time::format::DateTimeFormatterBuilder parseCaseInsensitive();
		java::time::format::DateTimeFormatterBuilder parseCaseSensitive();
		java::time::format::DateTimeFormatterBuilder parseDefaulting(__JniBaseClass arg0, jlong arg1);
		java::time::format::DateTimeFormatterBuilder parseLenient();
		java::time::format::DateTimeFormatterBuilder parseStrict();
		java::time::format::DateTimeFormatter toFormatter();
		java::time::format::DateTimeFormatter toFormatter(java::util::Locale arg0);
	};
} // namespace java::time::format

