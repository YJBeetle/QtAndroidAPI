#pragma once

#include "../../../JObject.hpp"

class JString;
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
	class DateTimeFormatterBuilder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateTimeFormatterBuilder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DateTimeFormatterBuilder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		DateTimeFormatterBuilder();
		
		// Methods
		static JString getLocalizedDateTimePattern(java::time::format::FormatStyle arg0, java::time::format::FormatStyle arg1, JObject arg2, java::util::Locale arg3);
		java::time::format::DateTimeFormatterBuilder append(java::time::format::DateTimeFormatter arg0) const;
		java::time::format::DateTimeFormatterBuilder appendChronologyId() const;
		java::time::format::DateTimeFormatterBuilder appendChronologyText(java::time::format::TextStyle arg0) const;
		java::time::format::DateTimeFormatterBuilder appendDayPeriodText(java::time::format::TextStyle arg0) const;
		java::time::format::DateTimeFormatterBuilder appendFraction(JObject arg0, jint arg1, jint arg2, jboolean arg3) const;
		java::time::format::DateTimeFormatterBuilder appendGenericZoneText(java::time::format::TextStyle arg0) const;
		java::time::format::DateTimeFormatterBuilder appendGenericZoneText(java::time::format::TextStyle arg0, JObject arg1) const;
		java::time::format::DateTimeFormatterBuilder appendInstant() const;
		java::time::format::DateTimeFormatterBuilder appendInstant(jint arg0) const;
		java::time::format::DateTimeFormatterBuilder appendLiteral(jchar arg0) const;
		java::time::format::DateTimeFormatterBuilder appendLiteral(JString arg0) const;
		java::time::format::DateTimeFormatterBuilder appendLocalized(java::time::format::FormatStyle arg0, java::time::format::FormatStyle arg1) const;
		java::time::format::DateTimeFormatterBuilder appendLocalizedOffset(java::time::format::TextStyle arg0) const;
		java::time::format::DateTimeFormatterBuilder appendOffset(JString arg0, JString arg1) const;
		java::time::format::DateTimeFormatterBuilder appendOffsetId() const;
		java::time::format::DateTimeFormatterBuilder appendOptional(java::time::format::DateTimeFormatter arg0) const;
		java::time::format::DateTimeFormatterBuilder appendPattern(JString arg0) const;
		java::time::format::DateTimeFormatterBuilder appendText(JObject arg0) const;
		java::time::format::DateTimeFormatterBuilder appendText(JObject arg0, java::time::format::TextStyle arg1) const;
		java::time::format::DateTimeFormatterBuilder appendText(JObject arg0, JObject arg1) const;
		java::time::format::DateTimeFormatterBuilder appendValue(JObject arg0) const;
		java::time::format::DateTimeFormatterBuilder appendValue(JObject arg0, jint arg1) const;
		java::time::format::DateTimeFormatterBuilder appendValue(JObject arg0, jint arg1, jint arg2, java::time::format::SignStyle arg3) const;
		java::time::format::DateTimeFormatterBuilder appendValueReduced(JObject arg0, jint arg1, jint arg2, jint arg3) const;
		java::time::format::DateTimeFormatterBuilder appendValueReduced(JObject arg0, jint arg1, jint arg2, JObject arg3) const;
		java::time::format::DateTimeFormatterBuilder appendZoneId() const;
		java::time::format::DateTimeFormatterBuilder appendZoneOrOffsetId() const;
		java::time::format::DateTimeFormatterBuilder appendZoneRegionId() const;
		java::time::format::DateTimeFormatterBuilder appendZoneText(java::time::format::TextStyle arg0) const;
		java::time::format::DateTimeFormatterBuilder appendZoneText(java::time::format::TextStyle arg0, JObject arg1) const;
		java::time::format::DateTimeFormatterBuilder optionalEnd() const;
		java::time::format::DateTimeFormatterBuilder optionalStart() const;
		java::time::format::DateTimeFormatterBuilder padNext(jint arg0) const;
		java::time::format::DateTimeFormatterBuilder padNext(jint arg0, jchar arg1) const;
		java::time::format::DateTimeFormatterBuilder parseCaseInsensitive() const;
		java::time::format::DateTimeFormatterBuilder parseCaseSensitive() const;
		java::time::format::DateTimeFormatterBuilder parseDefaulting(JObject arg0, jlong arg1) const;
		java::time::format::DateTimeFormatterBuilder parseLenient() const;
		java::time::format::DateTimeFormatterBuilder parseStrict() const;
		java::time::format::DateTimeFormatter toFormatter() const;
		java::time::format::DateTimeFormatter toFormatter(java::util::Locale arg0) const;
	};
} // namespace java::time::format

