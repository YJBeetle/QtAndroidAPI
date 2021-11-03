#pragma once

#include "./DecimalFormat.hpp"

namespace android::icu::text
{
	class CompactDecimalFormat_CompactStyle;
}
namespace android::icu::util
{
	class CurrencyAmount;
}
namespace android::icu::util
{
	class ULocale;
}
class JString;
namespace java::lang
{
	class Number;
}
class JString;
namespace java::text
{
	class ParsePosition;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class CompactDecimalFormat : public android::icu::text::DecimalFormat
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CompactDecimalFormat(const char *className, const char *sig, Ts...agv) : android::icu::text::DecimalFormat(className, sig, std::forward<Ts>(agv)...) {}
		CompactDecimalFormat(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::CompactDecimalFormat getInstance(android::icu::util::ULocale arg0, android::icu::text::CompactDecimalFormat_CompactStyle arg1);
		static android::icu::text::CompactDecimalFormat getInstance(java::util::Locale arg0, android::icu::text::CompactDecimalFormat_CompactStyle arg1);
		java::lang::Number parse(JString arg0, java::text::ParsePosition arg1);
		android::icu::util::CurrencyAmount parseCurrency(JString arg0, java::text::ParsePosition arg1);
	};
} // namespace android::icu::text

