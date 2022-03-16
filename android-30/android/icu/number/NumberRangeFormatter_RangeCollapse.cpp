#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./NumberRangeFormatter_RangeCollapse.hpp"

namespace android::icu::number
{
	// Fields
	android::icu::number::NumberRangeFormatter_RangeCollapse NumberRangeFormatter_RangeCollapse::ALL()
	{
		return getStaticObjectField(
			"android.icu.number.NumberRangeFormatter$RangeCollapse",
			"ALL",
			"Landroid/icu/number/NumberRangeFormatter$RangeCollapse;"
		);
	}
	android::icu::number::NumberRangeFormatter_RangeCollapse NumberRangeFormatter_RangeCollapse::AUTO()
	{
		return getStaticObjectField(
			"android.icu.number.NumberRangeFormatter$RangeCollapse",
			"AUTO",
			"Landroid/icu/number/NumberRangeFormatter$RangeCollapse;"
		);
	}
	android::icu::number::NumberRangeFormatter_RangeCollapse NumberRangeFormatter_RangeCollapse::NONE()
	{
		return getStaticObjectField(
			"android.icu.number.NumberRangeFormatter$RangeCollapse",
			"NONE",
			"Landroid/icu/number/NumberRangeFormatter$RangeCollapse;"
		);
	}
	android::icu::number::NumberRangeFormatter_RangeCollapse NumberRangeFormatter_RangeCollapse::UNIT()
	{
		return getStaticObjectField(
			"android.icu.number.NumberRangeFormatter$RangeCollapse",
			"UNIT",
			"Landroid/icu/number/NumberRangeFormatter$RangeCollapse;"
		);
	}
	
	// Constructors
	
	// Methods
	android::icu::number::NumberRangeFormatter_RangeCollapse NumberRangeFormatter_RangeCollapse::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberRangeFormatter$RangeCollapse",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/number/NumberRangeFormatter$RangeCollapse;",
			arg0.object<jstring>()
		);
	}
	JArray NumberRangeFormatter_RangeCollapse::values()
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberRangeFormatter$RangeCollapse",
			"values",
			"()[Landroid/icu/number/NumberRangeFormatter$RangeCollapse;"
		);
	}
} // namespace android::icu::number

