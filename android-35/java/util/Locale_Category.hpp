#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Locale_Category.def.hpp"

namespace java::util
{
	// Fields
	inline java::util::Locale_Category Locale_Category::DISPLAY()
	{
		return getStaticObjectField(
			"java.util.Locale$Category",
			"DISPLAY",
			"Ljava/util/Locale$Category;"
		);
	}
	inline java::util::Locale_Category Locale_Category::FORMAT()
	{
		return getStaticObjectField(
			"java.util.Locale$Category",
			"FORMAT",
			"Ljava/util/Locale$Category;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::util::Locale_Category Locale_Category::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.Locale$Category",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/Locale$Category;",
			arg0.object<jstring>()
		);
	}
	inline JArray Locale_Category::values()
	{
		return callStaticObjectMethod(
			"java.util.Locale$Category",
			"values",
			"()[Ljava/util/Locale$Category;"
		);
	}
} // namespace java::util

// Base class headers
#include "../lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
