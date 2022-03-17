#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./ResolverStyle.def.hpp"

namespace java::time::format
{
	// Fields
	inline java::time::format::ResolverStyle ResolverStyle::LENIENT()
	{
		return getStaticObjectField(
			"java.time.format.ResolverStyle",
			"LENIENT",
			"Ljava/time/format/ResolverStyle;"
		);
	}
	inline java::time::format::ResolverStyle ResolverStyle::SMART()
	{
		return getStaticObjectField(
			"java.time.format.ResolverStyle",
			"SMART",
			"Ljava/time/format/ResolverStyle;"
		);
	}
	inline java::time::format::ResolverStyle ResolverStyle::STRICT()
	{
		return getStaticObjectField(
			"java.time.format.ResolverStyle",
			"STRICT",
			"Ljava/time/format/ResolverStyle;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::format::ResolverStyle ResolverStyle::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.format.ResolverStyle",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/format/ResolverStyle;",
			arg0.object<jstring>()
		);
	}
	inline JArray ResolverStyle::values()
	{
		return callStaticObjectMethod(
			"java.time.format.ResolverStyle",
			"values",
			"()[Ljava/time/format/ResolverStyle;"
		);
	}
} // namespace java::time::format

// Base class headers
#include "../../lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::time::format;
#endif
