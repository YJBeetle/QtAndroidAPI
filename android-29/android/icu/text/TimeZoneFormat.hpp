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
		
		// QJniObject forward
		template<typename ...Ts> explicit TimeZoneFormat(const char *className, const char *sig, Ts...agv) : android::icu::text::UFormat(className, sig, std::forward<Ts>(agv)...) {}
		TimeZoneFormat(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::TimeZoneFormat getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::TimeZoneFormat getInstance(java::util::Locale arg0);
		android::icu::text::TimeZoneFormat cloneAsThawed();
		jstring format(android::icu::text::TimeZoneFormat_Style arg0, android::icu::util::TimeZone arg1, jlong arg2);
		jstring format(android::icu::text::TimeZoneFormat_Style arg0, android::icu::util::TimeZone arg1, jlong arg2, android::icu::util::Output arg3);
		java::lang::StringBuffer format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		jstring formatOffsetISO8601Basic(jint arg0, jboolean arg1, jboolean arg2, jboolean arg3);
		jstring formatOffsetISO8601Extended(jint arg0, jboolean arg1, jboolean arg2, jboolean arg3);
		jstring formatOffsetLocalizedGMT(jint arg0);
		jstring formatOffsetShortLocalizedGMT(jint arg0);
		__JniBaseClass formatToCharacterIterator(jobject arg0);
		android::icu::text::TimeZoneFormat freeze();
		java::util::EnumSet getDefaultParseOptions();
		jstring getGMTOffsetDigits();
		jstring getGMTOffsetPattern(android::icu::text::TimeZoneFormat_GMTOffsetPatternType arg0);
		jstring getGMTPattern();
		jstring getGMTZeroFormat();
		android::icu::text::TimeZoneNames getTimeZoneNames();
		jboolean isFrozen();
		android::icu::util::TimeZone parse(jstring arg0);
		android::icu::util::TimeZone parse(jstring arg0, java::text::ParsePosition arg1);
		android::icu::util::TimeZone parse(android::icu::text::TimeZoneFormat_Style arg0, jstring arg1, java::text::ParsePosition arg2, android::icu::util::Output arg3);
		android::icu::util::TimeZone parse(android::icu::text::TimeZoneFormat_Style arg0, jstring arg1, java::text::ParsePosition arg2, java::util::EnumSet arg3, android::icu::util::Output arg4);
		jobject parseObject(jstring arg0, java::text::ParsePosition arg1);
		jint parseOffsetISO8601(jstring arg0, java::text::ParsePosition arg1);
		jint parseOffsetLocalizedGMT(jstring arg0, java::text::ParsePosition arg1);
		jint parseOffsetShortLocalizedGMT(jstring arg0, java::text::ParsePosition arg1);
		android::icu::text::TimeZoneFormat setDefaultParseOptions(java::util::EnumSet arg0);
		android::icu::text::TimeZoneFormat setGMTOffsetDigits(jstring arg0);
		android::icu::text::TimeZoneFormat setGMTOffsetPattern(android::icu::text::TimeZoneFormat_GMTOffsetPatternType arg0, jstring arg1);
		android::icu::text::TimeZoneFormat setGMTPattern(jstring arg0);
		android::icu::text::TimeZoneFormat setGMTZeroFormat(jstring arg0);
		android::icu::text::TimeZoneFormat setTimeZoneNames(android::icu::text::TimeZoneNames arg0);
	};
} // namespace android::icu::text

