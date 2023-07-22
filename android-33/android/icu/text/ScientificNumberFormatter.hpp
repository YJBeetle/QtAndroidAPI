#pragma once

#include "./DecimalFormat.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ScientificNumberFormatter.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::text::ScientificNumberFormatter ScientificNumberFormatter::getMarkupInstance(android::icu::text::DecimalFormat arg0, JString arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.ScientificNumberFormatter",
			"getMarkupInstance",
			"(Landroid/icu/text/DecimalFormat;Ljava/lang/String;Ljava/lang/String;)Landroid/icu/text/ScientificNumberFormatter;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline android::icu::text::ScientificNumberFormatter ScientificNumberFormatter::getMarkupInstance(android::icu::util::ULocale arg0, JString arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.ScientificNumberFormatter",
			"getMarkupInstance",
			"(Landroid/icu/util/ULocale;Ljava/lang/String;Ljava/lang/String;)Landroid/icu/text/ScientificNumberFormatter;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline android::icu::text::ScientificNumberFormatter ScientificNumberFormatter::getSuperscriptInstance(android::icu::text::DecimalFormat arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.ScientificNumberFormatter",
			"getSuperscriptInstance",
			"(Landroid/icu/text/DecimalFormat;)Landroid/icu/text/ScientificNumberFormatter;",
			arg0.object()
		);
	}
	inline android::icu::text::ScientificNumberFormatter ScientificNumberFormatter::getSuperscriptInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.ScientificNumberFormatter",
			"getSuperscriptInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/ScientificNumberFormatter;",
			arg0.object()
		);
	}
	inline JString ScientificNumberFormatter::format(JObject arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;)Ljava/lang/String;",
			arg0.object<jobject>()
		);
	}
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
