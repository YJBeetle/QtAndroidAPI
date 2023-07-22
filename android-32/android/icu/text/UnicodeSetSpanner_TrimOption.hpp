#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./UnicodeSetSpanner_TrimOption.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::UnicodeSetSpanner_TrimOption UnicodeSetSpanner_TrimOption::BOTH()
	{
		return getStaticObjectField(
			"android.icu.text.UnicodeSetSpanner$TrimOption",
			"BOTH",
			"Landroid/icu/text/UnicodeSetSpanner$TrimOption;"
		);
	}
	inline android::icu::text::UnicodeSetSpanner_TrimOption UnicodeSetSpanner_TrimOption::LEADING()
	{
		return getStaticObjectField(
			"android.icu.text.UnicodeSetSpanner$TrimOption",
			"LEADING",
			"Landroid/icu/text/UnicodeSetSpanner$TrimOption;"
		);
	}
	inline android::icu::text::UnicodeSetSpanner_TrimOption UnicodeSetSpanner_TrimOption::TRAILING()
	{
		return getStaticObjectField(
			"android.icu.text.UnicodeSetSpanner$TrimOption",
			"TRAILING",
			"Landroid/icu/text/UnicodeSetSpanner$TrimOption;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::UnicodeSetSpanner_TrimOption UnicodeSetSpanner_TrimOption::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.UnicodeSetSpanner$TrimOption",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSetSpanner$TrimOption;",
			arg0.object<jstring>()
		);
	}
	inline JArray UnicodeSetSpanner_TrimOption::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.UnicodeSetSpanner$TrimOption",
			"values",
			"()[Landroid/icu/text/UnicodeSetSpanner$TrimOption;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
