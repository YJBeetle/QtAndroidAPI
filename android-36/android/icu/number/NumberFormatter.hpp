#pragma once

#include "./LocalizedNumberFormatter.def.hpp"
#include "./UnlocalizedNumberFormatter.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./NumberFormatter.def.hpp"

namespace android::icu::number
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::number::UnlocalizedNumberFormatter NumberFormatter::with()
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter",
			"with",
			"()Landroid/icu/number/UnlocalizedNumberFormatter;"
		);
	}
	inline android::icu::number::LocalizedNumberFormatter NumberFormatter::withLocale(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter",
			"withLocale",
			"(Landroid/icu/util/ULocale;)Landroid/icu/number/LocalizedNumberFormatter;",
			arg0.object()
		);
	}
	inline android::icu::number::LocalizedNumberFormatter NumberFormatter::withLocale(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter",
			"withLocale",
			"(Ljava/util/Locale;)Landroid/icu/number/LocalizedNumberFormatter;",
			arg0.object()
		);
	}
} // namespace android::icu::number

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::number;
#endif
