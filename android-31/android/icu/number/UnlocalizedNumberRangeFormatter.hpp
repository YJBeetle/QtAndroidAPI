#pragma once

#include "./LocalizedNumberRangeFormatter.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./UnlocalizedNumberRangeFormatter.def.hpp"

namespace android::icu::number
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::number::LocalizedNumberRangeFormatter UnlocalizedNumberRangeFormatter::locale(android::icu::util::ULocale arg0) const
	{
		return callObjectMethod(
			"locale",
			"(Landroid/icu/util/ULocale;)Landroid/icu/number/LocalizedNumberRangeFormatter;",
			arg0.object()
		);
	}
	inline android::icu::number::LocalizedNumberRangeFormatter UnlocalizedNumberRangeFormatter::locale(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"locale",
			"(Ljava/util/Locale;)Landroid/icu/number/LocalizedNumberRangeFormatter;",
			arg0.object()
		);
	}
} // namespace android::icu::number

// Base class headers
#include "./NumberRangeFormatterSettings.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::number;
#endif
