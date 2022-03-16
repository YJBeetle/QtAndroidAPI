#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class DisplayContext;
}
namespace android::icu::text
{
	class NumberFormat;
}
namespace android::icu::text
{
	class RelativeDateTimeFormatter_AbsoluteUnit;
}
namespace android::icu::text
{
	class RelativeDateTimeFormatter_Direction;
}
namespace android::icu::text
{
	class RelativeDateTimeFormatter_RelativeDateTimeUnit;
}
namespace android::icu::text
{
	class RelativeDateTimeFormatter_RelativeUnit;
}
namespace android::icu::text
{
	class RelativeDateTimeFormatter_Style;
}
namespace android::icu::util
{
	class ULocale;
}
class JString;
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class RelativeDateTimeFormatter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RelativeDateTimeFormatter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RelativeDateTimeFormatter(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::RelativeDateTimeFormatter getInstance();
		static android::icu::text::RelativeDateTimeFormatter getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::RelativeDateTimeFormatter getInstance(java::util::Locale arg0);
		static android::icu::text::RelativeDateTimeFormatter getInstance(android::icu::util::ULocale arg0, android::icu::text::NumberFormat arg1);
		static android::icu::text::RelativeDateTimeFormatter getInstance(java::util::Locale arg0, android::icu::text::NumberFormat arg1);
		static android::icu::text::RelativeDateTimeFormatter getInstance(android::icu::util::ULocale arg0, android::icu::text::NumberFormat arg1, android::icu::text::RelativeDateTimeFormatter_Style arg2, android::icu::text::DisplayContext arg3);
		JString combineDateAndTime(JString arg0, JString arg1) const;
		JString format(android::icu::text::RelativeDateTimeFormatter_Direction arg0, android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit arg1) const;
		JString format(jdouble arg0, android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit arg1) const;
		JString format(jdouble arg0, android::icu::text::RelativeDateTimeFormatter_Direction arg1, android::icu::text::RelativeDateTimeFormatter_RelativeUnit arg2) const;
		JString formatNumeric(jdouble arg0, android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit arg1) const;
		android::icu::text::DisplayContext getCapitalizationContext() const;
		android::icu::text::RelativeDateTimeFormatter_Style getFormatStyle() const;
		android::icu::text::NumberFormat getNumberFormat() const;
	};
} // namespace android::icu::text

