#pragma once

#include "./LocalizedNumberRangeFormatter.def.hpp"
#include "./UnlocalizedNumberRangeFormatter.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./NumberRangeFormatter.def.hpp"

namespace android::icu::number
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::number::UnlocalizedNumberRangeFormatter NumberRangeFormatter::with()
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberRangeFormatter",
			"with",
			"()Landroid/icu/number/UnlocalizedNumberRangeFormatter;"
		);
	}
	inline android::icu::number::LocalizedNumberRangeFormatter NumberRangeFormatter::withLocale(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberRangeFormatter",
			"withLocale",
			"(Landroid/icu/util/ULocale;)Landroid/icu/number/LocalizedNumberRangeFormatter;",
			arg0.object()
		);
	}
	inline android::icu::number::LocalizedNumberRangeFormatter NumberRangeFormatter::withLocale(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberRangeFormatter",
			"withLocale",
			"(Ljava/util/Locale;)Landroid/icu/number/LocalizedNumberRangeFormatter;",
			arg0.object()
		);
	}
} // namespace android::icu::number

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::number;
#endif
