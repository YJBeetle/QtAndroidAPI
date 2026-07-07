#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Locale_IsoCountryCode.def.hpp"

namespace java::util
{
	// Fields
	inline java::util::Locale_IsoCountryCode Locale_IsoCountryCode::PART1_ALPHA2()
	{
		return getStaticObjectField(
			"java.util.Locale$IsoCountryCode",
			"PART1_ALPHA2",
			"Ljava/util/Locale$IsoCountryCode;"
		);
	}
	inline java::util::Locale_IsoCountryCode Locale_IsoCountryCode::PART1_ALPHA3()
	{
		return getStaticObjectField(
			"java.util.Locale$IsoCountryCode",
			"PART1_ALPHA3",
			"Ljava/util/Locale$IsoCountryCode;"
		);
	}
	inline java::util::Locale_IsoCountryCode Locale_IsoCountryCode::PART3()
	{
		return getStaticObjectField(
			"java.util.Locale$IsoCountryCode",
			"PART3",
			"Ljava/util/Locale$IsoCountryCode;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::util::Locale_IsoCountryCode Locale_IsoCountryCode::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.Locale$IsoCountryCode",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/Locale$IsoCountryCode;",
			arg0.object<jstring>()
		);
	}
	inline JArray Locale_IsoCountryCode::values()
	{
		return callStaticObjectMethod(
			"java.util.Locale$IsoCountryCode",
			"values",
			"()[Ljava/util/Locale$IsoCountryCode;"
		);
	}
} // namespace java::util

// Base class headers
#include "../lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
