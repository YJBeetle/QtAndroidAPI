#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./ListFormatter_Width.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::ListFormatter_Width ListFormatter_Width::NARROW()
	{
		return getStaticObjectField(
			"android.icu.text.ListFormatter$Width",
			"NARROW",
			"Landroid/icu/text/ListFormatter$Width;"
		);
	}
	inline android::icu::text::ListFormatter_Width ListFormatter_Width::SHORT()
	{
		return getStaticObjectField(
			"android.icu.text.ListFormatter$Width",
			"SHORT",
			"Landroid/icu/text/ListFormatter$Width;"
		);
	}
	inline android::icu::text::ListFormatter_Width ListFormatter_Width::WIDE()
	{
		return getStaticObjectField(
			"android.icu.text.ListFormatter$Width",
			"WIDE",
			"Landroid/icu/text/ListFormatter$Width;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::ListFormatter_Width ListFormatter_Width::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.ListFormatter$Width",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/ListFormatter$Width;",
			arg0.object<jstring>()
		);
	}
	inline JArray ListFormatter_Width::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.ListFormatter$Width",
			"values",
			"()[Landroid/icu/text/ListFormatter$Width;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
