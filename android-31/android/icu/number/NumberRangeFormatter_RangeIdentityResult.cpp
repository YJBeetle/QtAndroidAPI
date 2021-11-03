#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./NumberRangeFormatter_RangeIdentityResult.hpp"

namespace android::icu::number
{
	// Fields
	android::icu::number::NumberRangeFormatter_RangeIdentityResult NumberRangeFormatter_RangeIdentityResult::EQUAL_AFTER_ROUNDING()
	{
		return getStaticObjectField(
			"android.icu.number.NumberRangeFormatter$RangeIdentityResult",
			"EQUAL_AFTER_ROUNDING",
			"Landroid/icu/number/NumberRangeFormatter$RangeIdentityResult;"
		);
	}
	android::icu::number::NumberRangeFormatter_RangeIdentityResult NumberRangeFormatter_RangeIdentityResult::EQUAL_BEFORE_ROUNDING()
	{
		return getStaticObjectField(
			"android.icu.number.NumberRangeFormatter$RangeIdentityResult",
			"EQUAL_BEFORE_ROUNDING",
			"Landroid/icu/number/NumberRangeFormatter$RangeIdentityResult;"
		);
	}
	android::icu::number::NumberRangeFormatter_RangeIdentityResult NumberRangeFormatter_RangeIdentityResult::NOT_EQUAL()
	{
		return getStaticObjectField(
			"android.icu.number.NumberRangeFormatter$RangeIdentityResult",
			"NOT_EQUAL",
			"Landroid/icu/number/NumberRangeFormatter$RangeIdentityResult;"
		);
	}
	
	// QAndroidJniObject forward
	NumberRangeFormatter_RangeIdentityResult::NumberRangeFormatter_RangeIdentityResult(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::number::NumberRangeFormatter_RangeIdentityResult NumberRangeFormatter_RangeIdentityResult::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberRangeFormatter$RangeIdentityResult",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/number/NumberRangeFormatter$RangeIdentityResult;",
			arg0.object<jstring>()
		);
	}
	JArray NumberRangeFormatter_RangeIdentityResult::values()
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberRangeFormatter$RangeIdentityResult",
			"values",
			"()[Landroid/icu/number/NumberRangeFormatter$RangeIdentityResult;"
		);
	}
} // namespace android::icu::number

