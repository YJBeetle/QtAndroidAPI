#include "./LocalizedNumberFormatter.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "./UnlocalizedNumberFormatter.hpp"

namespace android::icu::number
{
	// Fields
	
	// QJniObject forward
	UnlocalizedNumberFormatter::UnlocalizedNumberFormatter(QJniObject obj) : android::icu::number::NumberFormatterSettings(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::number::LocalizedNumberFormatter UnlocalizedNumberFormatter::locale(android::icu::util::ULocale arg0) const
	{
		return callObjectMethod(
			"locale",
			"(Landroid/icu/util/ULocale;)Landroid/icu/number/LocalizedNumberFormatter;",
			arg0.object()
		);
	}
	android::icu::number::LocalizedNumberFormatter UnlocalizedNumberFormatter::locale(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"locale",
			"(Ljava/util/Locale;)Landroid/icu/number/LocalizedNumberFormatter;",
			arg0.object()
		);
	}
} // namespace android::icu::number

