#pragma once

#include "./UFormat.def.hpp"

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
class JObject;
class JString;
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
		TimeZoneFormat(QJniObject obj) : android::icu::text::UFormat(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::TimeZoneFormat getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::TimeZoneFormat getInstance(java::util::Locale arg0);
		android::icu::text::TimeZoneFormat cloneAsThawed() const;
		JString format(android::icu::text::TimeZoneFormat_Style arg0, android::icu::util::TimeZone arg1, jlong arg2) const;
		JString format(android::icu::text::TimeZoneFormat_Style arg0, android::icu::util::TimeZone arg1, jlong arg2, android::icu::util::Output arg3) const;
		java::lang::StringBuffer format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		JString formatOffsetISO8601Basic(jint arg0, jboolean arg1, jboolean arg2, jboolean arg3) const;
		JString formatOffsetISO8601Extended(jint arg0, jboolean arg1, jboolean arg2, jboolean arg3) const;
		JString formatOffsetLocalizedGMT(jint arg0) const;
		JString formatOffsetShortLocalizedGMT(jint arg0) const;
		JObject formatToCharacterIterator(JObject arg0) const;
		android::icu::text::TimeZoneFormat freeze() const;
		java::util::EnumSet getDefaultParseOptions() const;
		JString getGMTOffsetDigits() const;
		JString getGMTOffsetPattern(android::icu::text::TimeZoneFormat_GMTOffsetPatternType arg0) const;
		JString getGMTPattern() const;
		JString getGMTZeroFormat() const;
		android::icu::text::TimeZoneNames getTimeZoneNames() const;
		jboolean isFrozen() const;
		android::icu::util::TimeZone parse(JString arg0) const;
		android::icu::util::TimeZone parse(JString arg0, java::text::ParsePosition arg1) const;
		android::icu::util::TimeZone parse(android::icu::text::TimeZoneFormat_Style arg0, JString arg1, java::text::ParsePosition arg2, android::icu::util::Output arg3) const;
		android::icu::util::TimeZone parse(android::icu::text::TimeZoneFormat_Style arg0, JString arg1, java::text::ParsePosition arg2, java::util::EnumSet arg3, android::icu::util::Output arg4) const;
		JObject parseObject(JString arg0, java::text::ParsePosition arg1) const;
		jint parseOffsetISO8601(JString arg0, java::text::ParsePosition arg1) const;
		jint parseOffsetLocalizedGMT(JString arg0, java::text::ParsePosition arg1) const;
		jint parseOffsetShortLocalizedGMT(JString arg0, java::text::ParsePosition arg1) const;
		android::icu::text::TimeZoneFormat setDefaultParseOptions(java::util::EnumSet arg0) const;
		android::icu::text::TimeZoneFormat setGMTOffsetDigits(JString arg0) const;
		android::icu::text::TimeZoneFormat setGMTOffsetPattern(android::icu::text::TimeZoneFormat_GMTOffsetPatternType arg0, JString arg1) const;
		android::icu::text::TimeZoneFormat setGMTPattern(JString arg0) const;
		android::icu::text::TimeZoneFormat setGMTZeroFormat(JString arg0) const;
		android::icu::text::TimeZoneFormat setTimeZoneNames(android::icu::text::TimeZoneNames arg0) const;
	};
} // namespace android::icu::text

