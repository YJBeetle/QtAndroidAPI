#pragma once

#include "./LocalizedNumberFormatter.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./UnlocalizedNumberFormatter.def.hpp"

namespace android::icu::number
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::number::LocalizedNumberFormatter UnlocalizedNumberFormatter::locale(android::icu::util::ULocale arg0) const
	{
		return callObjectMethod(
			"locale",
			"(Landroid/icu/util/ULocale;)Landroid/icu/number/LocalizedNumberFormatter;",
			arg0.object()
		);
	}
	inline android::icu::number::LocalizedNumberFormatter UnlocalizedNumberFormatter::locale(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"locale",
			"(Ljava/util/Locale;)Landroid/icu/number/LocalizedNumberFormatter;",
			arg0.object()
		);
	}
} // namespace android::icu::number

// Base class headers
#include "./NumberFormatterSettings.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::number;
#endif
