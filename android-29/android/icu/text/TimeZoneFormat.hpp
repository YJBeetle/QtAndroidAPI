#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/Format.hpp"
#include "./UFormat.hpp"

namespace android::icu::text
{
	class TimeZoneFormat_GMTOffsetPatternType;
}
namespace android::icu::text
{
	class TimeZoneFormat_Style;
}
namespace android::icu::text
{
	class TimeZoneNames;
}
namespace android::icu::util
{
	class Output;
}
namespace android::icu::util
{
	class TimeZone;
}
namespace android::icu::util
{
	class ULocale;
}
namespace java::lang
{
	class StringBuffer;
}
namespace java::text
{
	class FieldPosition;
}
namespace java::text
{
	class ParsePosition;
}
namespace java::util
{
	class EnumSet;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class TimeZoneFormat : public android::icu::text::UFormat
	{
	public:
		// Fields
		
		TimeZoneFormat(QAndroidJniObject obj);
		// Constructors
		TimeZoneFormat() = default;
		
		// Methods
		static QAndroidJniObject getInstance(android::icu::util::ULocale arg0);
		static QAndroidJniObject getInstance(java::util::Locale arg0);
		QAndroidJniObject cloneAsThawed();
		jstring format(android::icu::text::TimeZoneFormat_Style arg0, android::icu::util::TimeZone arg1, jlong arg2);
		jstring format(android::icu::text::TimeZoneFormat_Style arg0, android::icu::util::TimeZone arg1, jlong arg2, android::icu::util::Output arg3);
		QAndroidJniObject format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		jstring formatOffsetISO8601Basic(jint arg0, jboolean arg1, jboolean arg2, jboolean arg3);
		jstring formatOffsetISO8601Extended(jint arg0, jboolean arg1, jboolean arg2, jboolean arg3);
		jstring formatOffsetLocalizedGMT(jint arg0);
		jstring formatOffsetShortLocalizedGMT(jint arg0);
		QAndroidJniObject formatToCharacterIterator(jobject arg0);
		QAndroidJniObject freeze();
		QAndroidJniObject getDefaultParseOptions();
		jstring getGMTOffsetDigits();
		jstring getGMTOffsetPattern(android::icu::text::TimeZoneFormat_GMTOffsetPatternType arg0);
		jstring getGMTPattern();
		jstring getGMTZeroFormat();
		QAndroidJniObject getTimeZoneNames();
		jboolean isFrozen();
		QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject parse(jstring arg0, java::text::ParsePosition arg1);
		QAndroidJniObject parse(android::icu::text::TimeZoneFormat_Style arg0, jstring arg1, java::text::ParsePosition arg2, android::icu::util::Output arg3);
		QAndroidJniObject parse(android::icu::text::TimeZoneFormat_Style arg0, jstring arg1, java::text::ParsePosition arg2, java::util::EnumSet arg3, android::icu::util::Output arg4);
		jobject parseObject(jstring arg0, java::text::ParsePosition arg1);
		jint parseOffsetISO8601(jstring arg0, java::text::ParsePosition arg1);
		jint parseOffsetLocalizedGMT(jstring arg0, java::text::ParsePosition arg1);
		jint parseOffsetShortLocalizedGMT(jstring arg0, java::text::ParsePosition arg1);
		QAndroidJniObject setDefaultParseOptions(java::util::EnumSet arg0);
		QAndroidJniObject setGMTOffsetDigits(jstring arg0);
		QAndroidJniObject setGMTOffsetPattern(android::icu::text::TimeZoneFormat_GMTOffsetPatternType arg0, jstring arg1);
		QAndroidJniObject setGMTPattern(jstring arg0);
		QAndroidJniObject setGMTZeroFormat(jstring arg0);
		QAndroidJniObject setTimeZoneNames(android::icu::text::TimeZoneNames arg0);
	};
} // namespace android::icu::text

