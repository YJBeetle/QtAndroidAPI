#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./NumberRangeFormatter_RangeIdentityFallback.hpp"

namespace android::icu::number
{
	// Fields
	android::icu::number::NumberRangeFormatter_RangeIdentityFallback NumberRangeFormatter_RangeIdentityFallback::APPROXIMATELY()
	{
		return getStaticObjectField(
			"android.icu.number.NumberRangeFormatter$RangeIdentityFallback",
			"APPROXIMATELY",
			"Landroid/icu/number/NumberRangeFormatter$RangeIdentityFallback;"
		);
	}
	android::icu::number::NumberRangeFormatter_RangeIdentityFallback NumberRangeFormatter_RangeIdentityFallback::APPROXIMATELY_OR_SINGLE_VALUE()
	{
		return getStaticObjectField(
			"android.icu.number.NumberRangeFormatter$RangeIdentityFallback",
			"APPROXIMATELY_OR_SINGLE_VALUE",
			"Landroid/icu/number/NumberRangeFormatter$RangeIdentityFallback;"
		);
	}
	android::icu::number::NumberRangeFormatter_RangeIdentityFallback NumberRangeFormatter_RangeIdentityFallback::RANGE()
	{
		return getStaticObjectField(
			"android.icu.number.NumberRangeFormatter$RangeIdentityFallback",
			"RANGE",
			"Landroid/icu/number/NumberRangeFormatter$RangeIdentityFallback;"
		);
	}
	android::icu::number::NumberRangeFormatter_RangeIdentityFallback NumberRangeFormatter_RangeIdentityFallback::SINGLE_VALUE()
	{
		return getStaticObjectField(
			"android.icu.number.NumberRangeFormatter$RangeIdentityFallback",
			"SINGLE_VALUE",
			"Landroid/icu/number/NumberRangeFormatter$RangeIdentityFallback;"
		);
	}
	
	// QJniObject forward
	NumberRangeFormatter_RangeIdentityFallback::NumberRangeFormatter_RangeIdentityFallback(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::number::NumberRangeFormatter_RangeIdentityFallback NumberRangeFormatter_RangeIdentityFallback::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberRangeFormatter$RangeIdentityFallback",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/number/NumberRangeFormatter$RangeIdentityFallback;",
			arg0.object<jstring>()
		);
	}
	JArray NumberRangeFormatter_RangeIdentityFallback::values()
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberRangeFormatter$RangeIdentityFallback",
			"values",
			"()[Landroid/icu/number/NumberRangeFormatter$RangeIdentityFallback;"
		);
	}
} // namespace android::icu::number

