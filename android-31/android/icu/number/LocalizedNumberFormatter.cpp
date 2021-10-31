#include "./FormattedNumber.hpp"
#include "../util/Measure.hpp"
#include "../../../java/lang/Number.hpp"
#include "../../../java/text/Format.hpp"
#include "./LocalizedNumberFormatter.hpp"

namespace android::icu::number
{
	// Fields
	
	// QJniObject forward
	LocalizedNumberFormatter::LocalizedNumberFormatter(QJniObject obj) : android::icu::number::NumberFormatterSettings(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::number::FormattedNumber LocalizedNumberFormatter::format(android::icu::util::Measure arg0)
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/util/Measure;)Landroid/icu/number/FormattedNumber;",
			arg0.object()
		);
	}
	android::icu::number::FormattedNumber LocalizedNumberFormatter::format(jdouble arg0)
	{
		return callObjectMethod(
			"format",
			"(D)Landroid/icu/number/FormattedNumber;",
			arg0
		);
	}
	android::icu::number::FormattedNumber LocalizedNumberFormatter::format(java::lang::Number arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Number;)Landroid/icu/number/FormattedNumber;",
			arg0.object()
		);
	}
	android::icu::number::FormattedNumber LocalizedNumberFormatter::format(jlong arg0)
	{
		return callObjectMethod(
			"format",
			"(J)Landroid/icu/number/FormattedNumber;",
			arg0
		);
	}
	java::text::Format LocalizedNumberFormatter::toFormat()
	{
		return callObjectMethod(
			"toFormat",
			"()Ljava/text/Format;"
		);
	}
} // namespace android::icu::number

