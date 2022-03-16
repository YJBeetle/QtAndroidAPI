#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./ULocale_Category.def.hpp"

namespace android::icu::util
{
	// Fields
	inline android::icu::util::ULocale_Category ULocale_Category::DISPLAY()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale$Category",
			"DISPLAY",
			"Landroid/icu/util/ULocale$Category;"
		);
	}
	inline android::icu::util::ULocale_Category ULocale_Category::FORMAT()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale$Category",
			"FORMAT",
			"Landroid/icu/util/ULocale$Category;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::util::ULocale_Category ULocale_Category::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale$Category",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Category;",
			arg0.object<jstring>()
		);
	}
	inline JArray ULocale_Category::values()
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale$Category",
			"values",
			"()[Landroid/icu/util/ULocale$Category;"
		);
	}
} // namespace android::icu::util

// Base class headers
#include "../../../java/lang/Enum.hpp"

