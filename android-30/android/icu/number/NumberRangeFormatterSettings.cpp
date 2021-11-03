#include "./NumberRangeFormatter_RangeCollapse.hpp"
#include "./NumberRangeFormatter_RangeIdentityFallback.hpp"
#include "./UnlocalizedNumberFormatter.hpp"
#include "./NumberRangeFormatterSettings.hpp"

namespace android::icu::number
{
	// Fields
	
	// QJniObject forward
	NumberRangeFormatterSettings::NumberRangeFormatterSettings(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::number::NumberRangeFormatterSettings NumberRangeFormatterSettings::collapse(android::icu::number::NumberRangeFormatter_RangeCollapse arg0)
	{
		return callObjectMethod(
			"collapse",
			"(Landroid/icu/number/NumberRangeFormatter$RangeCollapse;)Landroid/icu/number/NumberRangeFormatterSettings;",
			arg0.object()
		);
	}
	jboolean NumberRangeFormatterSettings::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint NumberRangeFormatterSettings::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	android::icu::number::NumberRangeFormatterSettings NumberRangeFormatterSettings::identityFallback(android::icu::number::NumberRangeFormatter_RangeIdentityFallback arg0)
	{
		return callObjectMethod(
			"identityFallback",
			"(Landroid/icu/number/NumberRangeFormatter$RangeIdentityFallback;)Landroid/icu/number/NumberRangeFormatterSettings;",
			arg0.object()
		);
	}
	android::icu::number::NumberRangeFormatterSettings NumberRangeFormatterSettings::numberFormatterBoth(android::icu::number::UnlocalizedNumberFormatter arg0)
	{
		return callObjectMethod(
			"numberFormatterBoth",
			"(Landroid/icu/number/UnlocalizedNumberFormatter;)Landroid/icu/number/NumberRangeFormatterSettings;",
			arg0.object()
		);
	}
	android::icu::number::NumberRangeFormatterSettings NumberRangeFormatterSettings::numberFormatterFirst(android::icu::number::UnlocalizedNumberFormatter arg0)
	{
		return callObjectMethod(
			"numberFormatterFirst",
			"(Landroid/icu/number/UnlocalizedNumberFormatter;)Landroid/icu/number/NumberRangeFormatterSettings;",
			arg0.object()
		);
	}
	android::icu::number::NumberRangeFormatterSettings NumberRangeFormatterSettings::numberFormatterSecond(android::icu::number::UnlocalizedNumberFormatter arg0)
	{
		return callObjectMethod(
			"numberFormatterSecond",
			"(Landroid/icu/number/UnlocalizedNumberFormatter;)Landroid/icu/number/NumberRangeFormatterSettings;",
			arg0.object()
		);
	}
} // namespace android::icu::number

