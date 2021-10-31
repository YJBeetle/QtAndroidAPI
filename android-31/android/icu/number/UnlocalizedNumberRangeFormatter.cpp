#include "./LocalizedNumberRangeFormatter.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "./UnlocalizedNumberRangeFormatter.hpp"

namespace android::icu::number
{
	// Fields
	
	// QJniObject forward
	UnlocalizedNumberRangeFormatter::UnlocalizedNumberRangeFormatter(QJniObject obj) : android::icu::number::NumberRangeFormatterSettings(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::number::LocalizedNumberRangeFormatter UnlocalizedNumberRangeFormatter::locale(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"locale",
			"(Landroid/icu/util/ULocale;)Landroid/icu/number/LocalizedNumberRangeFormatter;",
			arg0.object()
		);
	}
	android::icu::number::LocalizedNumberRangeFormatter UnlocalizedNumberRangeFormatter::locale(java::util::Locale arg0)
	{
		return callObjectMethod(
			"locale",
			"(Ljava/util/Locale;)Landroid/icu/number/LocalizedNumberRangeFormatter;",
			arg0.object()
		);
	}
} // namespace android::icu::number

