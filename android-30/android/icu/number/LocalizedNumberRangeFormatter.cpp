#include "./FormattedNumberRange.hpp"
#include "../../../java/lang/Number.hpp"
#include "./LocalizedNumberRangeFormatter.hpp"

namespace android::icu::number
{
	// Fields
	
	// QAndroidJniObject forward
	LocalizedNumberRangeFormatter::LocalizedNumberRangeFormatter(QAndroidJniObject obj) : android::icu::number::NumberRangeFormatterSettings(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::number::FormattedNumberRange LocalizedNumberRangeFormatter::formatRange(jdouble arg0, jdouble arg1)
	{
		return callObjectMethod(
			"formatRange",
			"(DD)Landroid/icu/number/FormattedNumberRange;",
			arg0,
			arg1
		);
	}
	android::icu::number::FormattedNumberRange LocalizedNumberRangeFormatter::formatRange(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"formatRange",
			"(II)Landroid/icu/number/FormattedNumberRange;",
			arg0,
			arg1
		);
	}
	android::icu::number::FormattedNumberRange LocalizedNumberRangeFormatter::formatRange(java::lang::Number arg0, java::lang::Number arg1)
	{
		return callObjectMethod(
			"formatRange",
			"(Ljava/lang/Number;Ljava/lang/Number;)Landroid/icu/number/FormattedNumberRange;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::icu::number

