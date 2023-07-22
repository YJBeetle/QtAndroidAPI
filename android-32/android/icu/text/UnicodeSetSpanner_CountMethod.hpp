#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./UnicodeSetSpanner_CountMethod.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::UnicodeSetSpanner_CountMethod UnicodeSetSpanner_CountMethod::MIN_ELEMENTS()
	{
		return getStaticObjectField(
			"android.icu.text.UnicodeSetSpanner$CountMethod",
			"MIN_ELEMENTS",
			"Landroid/icu/text/UnicodeSetSpanner$CountMethod;"
		);
	}
	inline android::icu::text::UnicodeSetSpanner_CountMethod UnicodeSetSpanner_CountMethod::WHOLE_SPAN()
	{
		return getStaticObjectField(
			"android.icu.text.UnicodeSetSpanner$CountMethod",
			"WHOLE_SPAN",
			"Landroid/icu/text/UnicodeSetSpanner$CountMethod;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::UnicodeSetSpanner_CountMethod UnicodeSetSpanner_CountMethod::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.UnicodeSetSpanner$CountMethod",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSetSpanner$CountMethod;",
			arg0.object<jstring>()
		);
	}
	inline JArray UnicodeSetSpanner_CountMethod::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.UnicodeSetSpanner$CountMethod",
			"values",
			"()[Landroid/icu/text/UnicodeSetSpanner$CountMethod;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
