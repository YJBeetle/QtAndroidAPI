#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./SignStyle.def.hpp"

namespace java::time::format
{
	// Fields
	inline java::time::format::SignStyle SignStyle::ALWAYS()
	{
		return getStaticObjectField(
			"java.time.format.SignStyle",
			"ALWAYS",
			"Ljava/time/format/SignStyle;"
		);
	}
	inline java::time::format::SignStyle SignStyle::EXCEEDS_PAD()
	{
		return getStaticObjectField(
			"java.time.format.SignStyle",
			"EXCEEDS_PAD",
			"Ljava/time/format/SignStyle;"
		);
	}
	inline java::time::format::SignStyle SignStyle::NEVER()
	{
		return getStaticObjectField(
			"java.time.format.SignStyle",
			"NEVER",
			"Ljava/time/format/SignStyle;"
		);
	}
	inline java::time::format::SignStyle SignStyle::NORMAL()
	{
		return getStaticObjectField(
			"java.time.format.SignStyle",
			"NORMAL",
			"Ljava/time/format/SignStyle;"
		);
	}
	inline java::time::format::SignStyle SignStyle::NOT_NEGATIVE()
	{
		return getStaticObjectField(
			"java.time.format.SignStyle",
			"NOT_NEGATIVE",
			"Ljava/time/format/SignStyle;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::format::SignStyle SignStyle::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.format.SignStyle",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/format/SignStyle;",
			arg0.object<jstring>()
		);
	}
	inline JArray SignStyle::values()
	{
		return callStaticObjectMethod(
			"java.time.format.SignStyle",
			"values",
			"()[Ljava/time/format/SignStyle;"
		);
	}
} // namespace java::time::format

// Base class headers
#include "../../lang/Enum.hpp"

