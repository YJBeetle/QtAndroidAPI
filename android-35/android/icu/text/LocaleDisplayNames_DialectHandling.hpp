#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./LocaleDisplayNames_DialectHandling.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::LocaleDisplayNames_DialectHandling LocaleDisplayNames_DialectHandling::DIALECT_NAMES()
	{
		return getStaticObjectField(
			"android.icu.text.LocaleDisplayNames$DialectHandling",
			"DIALECT_NAMES",
			"Landroid/icu/text/LocaleDisplayNames$DialectHandling;"
		);
	}
	inline android::icu::text::LocaleDisplayNames_DialectHandling LocaleDisplayNames_DialectHandling::STANDARD_NAMES()
	{
		return getStaticObjectField(
			"android.icu.text.LocaleDisplayNames$DialectHandling",
			"STANDARD_NAMES",
			"Landroid/icu/text/LocaleDisplayNames$DialectHandling;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::LocaleDisplayNames_DialectHandling LocaleDisplayNames_DialectHandling::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames$DialectHandling",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/LocaleDisplayNames$DialectHandling;",
			arg0.object<jstring>()
		);
	}
	inline JArray LocaleDisplayNames_DialectHandling::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames$DialectHandling",
			"values",
			"()[Landroid/icu/text/LocaleDisplayNames$DialectHandling;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
