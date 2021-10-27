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
		
		DateTimeFormatterBuilder(QAndroidJniObject obj);
		// Constructors
		DateTimeFormatterBuilder();
		
		// Methods
		static jstring getLocalizedDateTimePattern(java::time::format::FormatStyle arg0, java::time::format::FormatStyle arg1, __JniBaseClass arg2, java::util::Locale arg3);
		QAndroidJniObject append(java::time::format::DateTimeFormatter arg0);
		QAndroidJniObject appendChronologyId();
		QAndroidJniObject appendChronologyText(java::time::format::TextStyle arg0);
		QAndroidJniObject appendDayPeriodText(java::time::format::TextStyle arg0);
		QAndroidJniObject appendFraction(__JniBaseClass arg0, jint arg1, jint arg2, jboolean arg3);
		QAndroidJniObject appendGenericZoneText(java::time::format::TextStyle arg0);
		QAndroidJniObject appendGenericZoneText(java::time::format::TextStyle arg0, __JniBaseClass arg1);
		QAndroidJniObject appendInstant();
		QAndroidJniObject appendInstant(jint arg0);
		QAndroidJniObject appendLiteral(jchar arg0);
		QAndroidJniObject appendLiteral(jstring arg0);
		QAndroidJniObject appendLiteral(const QString &arg0);
		QAndroidJniObject appendLocalized(java::time::format::FormatStyle arg0, java::time::format::FormatStyle arg1);
		QAndroidJniObject appendLocalizedOffset(java::time::format::TextStyle arg0);
		QAndroidJniObject appendOffset(jstring arg0, jstring arg1);
		QAndroidJniObject appendOffset(const QString &arg0, const QString &arg1);
		QAndroidJniObject appendOffsetId();
		QAndroidJniObject appendOptional(java::time::format::DateTimeFormatter arg0);
		QAndroidJniObject appendPattern(jstring arg0);
		QAndroidJniObject appendPattern(const QString &arg0);
		QAndroidJniObject appendText(__JniBaseClass arg0);
		QAndroidJniObject appendText(__JniBaseClass arg0, java::time::format::TextStyle arg1);
		QAndroidJniObject appendText(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject appendValue(__JniBaseClass arg0);
		QAndroidJniObject appendValue(__JniBaseClass arg0, jint arg1);
		QAndroidJniObject appendValue(__JniBaseClass arg0, jint arg1, jint arg2, java::time::format::SignStyle arg3);
		QAndroidJniObject appendValueReduced(__JniBaseClass arg0, jint arg1, jint arg2, jint arg3);
		QAndroidJniObject appendValueReduced(__JniBaseClass arg0, jint arg1, jint arg2, __JniBaseClass arg3);
		QAndroidJniObject appendZoneId();
		QAndroidJniObject appendZoneOrOffsetId();
		QAndroidJniObject appendZoneRegionId();
		QAndroidJniObject appendZoneText(java::time::format::TextStyle arg0);
		QAndroidJniObject appendZoneText(java::time::format::TextStyle arg0, __JniBaseClass arg1);
		QAndroidJniObject optionalEnd();
		QAndroidJniObject optionalStart();
		QAndroidJniObject padNext(jint arg0);
		QAndroidJniObject padNext(jint arg0, jchar arg1);
		QAndroidJniObject parseCaseInsensitive();
		QAndroidJniObject parseCaseSensitive();
		QAndroidJniObject parseDefaulting(__JniBaseClass arg0, jlong arg1);
		QAndroidJniObject parseLenient();
		QAndroidJniObject parseStrict();
		QAndroidJniObject toFormatter();
		QAndroidJniObject toFormatter(java::util::Locale arg0);
	};
} // namespace java::time::format

