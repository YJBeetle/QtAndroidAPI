#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/Format.hpp"
#include "./UFormat.hpp"
#include "./NumberFormat.hpp"
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
namespace java::lang
{
	class Number;
}
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CompactDecimalFormat(const char *className, const char *sig, Ts...agv) : android::icu::text::DecimalFormat(className, sig, std::forward<Ts>(agv)...) {}
		CompactDecimalFormat(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getInstance(android::icu::util::ULocale arg0, android::icu::text::CompactDecimalFormat_CompactStyle arg1);
		static QAndroidJniObject getInstance(java::util::Locale arg0, android::icu::text::CompactDecimalFormat_CompactStyle arg1);
		QAndroidJniObject parse(jstring arg0, java::text::ParsePosition arg1);
		QAndroidJniObject parseCurrency(jstring arg0, java::text::ParsePosition arg1);
	};
} // namespace android::icu::text

