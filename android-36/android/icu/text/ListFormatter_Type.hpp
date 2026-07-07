#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./ListFormatter_Type.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::ListFormatter_Type ListFormatter_Type::AND()
	{
		return getStaticObjectField(
			"android.icu.text.ListFormatter$Type",
			"AND",
			"Landroid/icu/text/ListFormatter$Type;"
		);
	}
	inline android::icu::text::ListFormatter_Type ListFormatter_Type::OR()
	{
		return getStaticObjectField(
			"android.icu.text.ListFormatter$Type",
			"OR",
			"Landroid/icu/text/ListFormatter$Type;"
		);
	}
	inline android::icu::text::ListFormatter_Type ListFormatter_Type::UNITS()
	{
		return getStaticObjectField(
			"android.icu.text.ListFormatter$Type",
			"UNITS",
			"Landroid/icu/text/ListFormatter$Type;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::ListFormatter_Type ListFormatter_Type::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.ListFormatter$Type",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/ListFormatter$Type;",
			arg0.object<jstring>()
		);
	}
	inline JArray ListFormatter_Type::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.ListFormatter$Type",
			"values",
			"()[Landroid/icu/text/ListFormatter$Type;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
