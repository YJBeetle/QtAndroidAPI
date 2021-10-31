#include "./LocalizedNumberRangeFormatter.hpp"
#include "./UnlocalizedNumberRangeFormatter.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "./NumberRangeFormatter.hpp"

namespace android::icu::number
{
	// Fields
	
	// QAndroidJniObject forward
	NumberRangeFormatter::NumberRangeFormatter(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::number::UnlocalizedNumberRangeFormatter NumberRangeFormatter::with()
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberRangeFormatter",
			"with",
			"()Landroid/icu/number/UnlocalizedNumberRangeFormatter;"
		);
	}
	android::icu::number::LocalizedNumberRangeFormatter NumberRangeFormatter::withLocale(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberRangeFormatter",
			"withLocale",
			"(Landroid/icu/util/ULocale;)Landroid/icu/number/LocalizedNumberRangeFormatter;",
			arg0.object()
		);
	}
	android::icu::number::LocalizedNumberRangeFormatter NumberRangeFormatter::withLocale(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberRangeFormatter",
			"withLocale",
			"(Ljava/util/Locale;)Landroid/icu/number/LocalizedNumberRangeFormatter;",
			arg0.object()
		);
	}
} // namespace android::icu::number

