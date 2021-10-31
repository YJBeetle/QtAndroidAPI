#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class RelativeDateTimeFormatter_FormattedRelativeDateTime;
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
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class RelativeDateTimeFormatter : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RelativeDateTimeFormatter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RelativeDateTimeFormatter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::RelativeDateTimeFormatter getInstance();
		static android::icu::text::RelativeDateTimeFormatter getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::RelativeDateTimeFormatter getInstance(java::util::Locale arg0);
		static android::icu::text::RelativeDateTimeFormatter getInstance(android::icu::util::ULocale arg0, android::icu::text::NumberFormat arg1);
		static android::icu::text::RelativeDateTimeFormatter getInstance(java::util::Locale arg0, android::icu::text::NumberFormat arg1);
		static android::icu::text::RelativeDateTimeFormatter getInstance(android::icu::util::ULocale arg0, android::icu::text::NumberFormat arg1, android::icu::text::RelativeDateTimeFormatter_Style arg2, android::icu::text::DisplayContext arg3);
		jstring combineDateAndTime(jstring arg0, jstring arg1);
		jstring format(android::icu::text::RelativeDateTimeFormatter_Direction arg0, android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit arg1);
		jstring format(jdouble arg0, android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit arg1);
		jstring format(jdouble arg0, android::icu::text::RelativeDateTimeFormatter_Direction arg1, android::icu::text::RelativeDateTimeFormatter_RelativeUnit arg2);
		jstring formatNumeric(jdouble arg0, android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit arg1);
		android::icu::text::RelativeDateTimeFormatter_FormattedRelativeDateTime formatNumericToValue(jdouble arg0, android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit arg1);
		android::icu::text::RelativeDateTimeFormatter_FormattedRelativeDateTime formatToValue(android::icu::text::RelativeDateTimeFormatter_Direction arg0, android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit arg1);
		android::icu::text::RelativeDateTimeFormatter_FormattedRelativeDateTime formatToValue(jdouble arg0, android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit arg1);
		android::icu::text::RelativeDateTimeFormatter_FormattedRelativeDateTime formatToValue(jdouble arg0, android::icu::text::RelativeDateTimeFormatter_Direction arg1, android::icu::text::RelativeDateTimeFormatter_RelativeUnit arg2);
		android::icu::text::DisplayContext getCapitalizationContext();
		android::icu::text::RelativeDateTimeFormatter_Style getFormatStyle();
		android::icu::text::NumberFormat getNumberFormat();
	};
} // namespace android::icu::text

