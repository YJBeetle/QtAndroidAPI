#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./FormatStyle.def.hpp"

namespace java::time::format
{
	// Fields
	inline java::time::format::FormatStyle FormatStyle::FULL()
	{
		return getStaticObjectField(
			"java.time.format.FormatStyle",
			"FULL",
			"Ljava/time/format/FormatStyle;"
		);
	}
	inline java::time::format::FormatStyle FormatStyle::LONG()
	{
		return getStaticObjectField(
			"java.time.format.FormatStyle",
			"LONG",
			"Ljava/time/format/FormatStyle;"
		);
	}
	inline java::time::format::FormatStyle FormatStyle::MEDIUM()
	{
		return getStaticObjectField(
			"java.time.format.FormatStyle",
			"MEDIUM",
			"Ljava/time/format/FormatStyle;"
		);
	}
	inline java::time::format::FormatStyle FormatStyle::SHORT()
	{
		return getStaticObjectField(
			"java.time.format.FormatStyle",
			"SHORT",
			"Ljava/time/format/FormatStyle;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::format::FormatStyle FormatStyle::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.format.FormatStyle",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/format/FormatStyle;",
			arg0.object<jstring>()
		);
	}
	inline JArray FormatStyle::values()
	{
		return callStaticObjectMethod(
			"java.time.format.FormatStyle",
			"values",
			"()[Ljava/time/format/FormatStyle;"
		);
	}
} // namespace java::time::format

// Base class headers
#include "../../lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::time::format;
#endif
