#pragma once

#include "../../JString.hpp"
#include "../../java/util/regex/Matcher.def.hpp"
#include "../../java/util/regex/Pattern.def.hpp"
#include "./Patterns.def.hpp"

namespace android::util
{
	// Fields
	inline java::util::regex::Pattern Patterns::DOMAIN_NAME()
	{
		return getStaticObjectField(
			"android.util.Patterns",
			"DOMAIN_NAME",
			"Ljava/util/regex/Pattern;"
		);
	}
	inline java::util::regex::Pattern Patterns::EMAIL_ADDRESS()
	{
		return getStaticObjectField(
			"android.util.Patterns",
			"EMAIL_ADDRESS",
			"Ljava/util/regex/Pattern;"
		);
	}
	inline JString Patterns::GOOD_IRI_CHAR()
	{
		return getStaticObjectField(
			"android.util.Patterns",
			"GOOD_IRI_CHAR",
			"Ljava/lang/String;"
		);
	}
	inline java::util::regex::Pattern Patterns::IP_ADDRESS()
	{
		return getStaticObjectField(
			"android.util.Patterns",
			"IP_ADDRESS",
			"Ljava/util/regex/Pattern;"
		);
	}
	inline java::util::regex::Pattern Patterns::PHONE()
	{
		return getStaticObjectField(
			"android.util.Patterns",
			"PHONE",
			"Ljava/util/regex/Pattern;"
		);
	}
	inline java::util::regex::Pattern Patterns::TOP_LEVEL_DOMAIN()
	{
		return getStaticObjectField(
			"android.util.Patterns",
			"TOP_LEVEL_DOMAIN",
			"Ljava/util/regex/Pattern;"
		);
	}
	inline JString Patterns::TOP_LEVEL_DOMAIN_STR()
	{
		return getStaticObjectField(
			"android.util.Patterns",
			"TOP_LEVEL_DOMAIN_STR",
			"Ljava/lang/String;"
		);
	}
	inline JString Patterns::TOP_LEVEL_DOMAIN_STR_FOR_WEB_URL()
	{
		return getStaticObjectField(
			"android.util.Patterns",
			"TOP_LEVEL_DOMAIN_STR_FOR_WEB_URL",
			"Ljava/lang/String;"
		);
	}
	inline java::util::regex::Pattern Patterns::WEB_URL()
	{
		return getStaticObjectField(
			"android.util.Patterns",
			"WEB_URL",
			"Ljava/util/regex/Pattern;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString Patterns::concatGroups(java::util::regex::Matcher arg0)
	{
		return callStaticObjectMethod(
			"android.util.Patterns",
			"concatGroups",
			"(Ljava/util/regex/Matcher;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString Patterns::digitsAndPlusOnly(java::util::regex::Matcher arg0)
	{
		return callStaticObjectMethod(
			"android.util.Patterns",
			"digitsAndPlusOnly",
			"(Ljava/util/regex/Matcher;)Ljava/lang/String;",
			arg0.object()
		);
	}
} // namespace android::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
