#pragma once

#include "./CompactDecimalFormat_CompactStyle.def.hpp"
#include "../util/CurrencyAmount.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/lang/Number.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/text/ParsePosition.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./CompactDecimalFormat.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::text::CompactDecimalFormat CompactDecimalFormat::getInstance(android::icu::util::ULocale arg0, android::icu::text::CompactDecimalFormat_CompactStyle arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.CompactDecimalFormat",
			"getInstance",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/CompactDecimalFormat$CompactStyle;)Landroid/icu/text/CompactDecimalFormat;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::icu::text::CompactDecimalFormat CompactDecimalFormat::getInstance(java::util::Locale arg0, android::icu::text::CompactDecimalFormat_CompactStyle arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.CompactDecimalFormat",
			"getInstance",
			"(Ljava/util/Locale;Landroid/icu/text/CompactDecimalFormat$CompactStyle;)Landroid/icu/text/CompactDecimalFormat;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::lang::Number CompactDecimalFormat::parse(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::icu::util::CurrencyAmount CompactDecimalFormat::parseCurrency(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parseCurrency",
			"(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Landroid/icu/util/CurrencyAmount;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/text/Format.hpp"
#include "./UFormat.hpp"
#include "./NumberFormat.hpp"
#include "./DecimalFormat.hpp"

