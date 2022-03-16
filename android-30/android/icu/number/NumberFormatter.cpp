#include "./LocalizedNumberFormatter.hpp"
#include "./UnlocalizedNumberFormatter.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "./NumberFormatter.hpp"

namespace android::icu::number
{
	// Fields
	
	// Constructors
	
	// Methods
	android::icu::number::UnlocalizedNumberFormatter NumberFormatter::with()
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter",
			"with",
			"()Landroid/icu/number/UnlocalizedNumberFormatter;"
		);
	}
	android::icu::number::LocalizedNumberFormatter NumberFormatter::withLocale(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter",
			"withLocale",
			"(Landroid/icu/util/ULocale;)Landroid/icu/number/LocalizedNumberFormatter;",
			arg0.object()
		);
	}
	android::icu::number::LocalizedNumberFormatter NumberFormatter::withLocale(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter",
			"withLocale",
			"(Ljava/util/Locale;)Landroid/icu/number/LocalizedNumberFormatter;",
			arg0.object()
		);
	}
} // namespace android::icu::number

