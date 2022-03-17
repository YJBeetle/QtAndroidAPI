#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./TextStyle.def.hpp"

namespace java::time::format
{
	// Fields
	inline java::time::format::TextStyle TextStyle::FULL()
	{
		return getStaticObjectField(
			"java.time.format.TextStyle",
			"FULL",
			"Ljava/time/format/TextStyle;"
		);
	}
	inline java::time::format::TextStyle TextStyle::FULL_STANDALONE()
	{
		return getStaticObjectField(
			"java.time.format.TextStyle",
			"FULL_STANDALONE",
			"Ljava/time/format/TextStyle;"
		);
	}
	inline java::time::format::TextStyle TextStyle::NARROW()
	{
		return getStaticObjectField(
			"java.time.format.TextStyle",
			"NARROW",
			"Ljava/time/format/TextStyle;"
		);
	}
	inline java::time::format::TextStyle TextStyle::NARROW_STANDALONE()
	{
		return getStaticObjectField(
			"java.time.format.TextStyle",
			"NARROW_STANDALONE",
			"Ljava/time/format/TextStyle;"
		);
	}
	inline java::time::format::TextStyle TextStyle::SHORT()
	{
		return getStaticObjectField(
			"java.time.format.TextStyle",
			"SHORT",
			"Ljava/time/format/TextStyle;"
		);
	}
	inline java::time::format::TextStyle TextStyle::SHORT_STANDALONE()
	{
		return getStaticObjectField(
			"java.time.format.TextStyle",
			"SHORT_STANDALONE",
			"Ljava/time/format/TextStyle;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::format::TextStyle TextStyle::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.format.TextStyle",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/format/TextStyle;",
			arg0.object<jstring>()
		);
	}
	inline JArray TextStyle::values()
	{
		return callStaticObjectMethod(
			"java.time.format.TextStyle",
			"values",
			"()[Ljava/time/format/TextStyle;"
		);
	}
	inline java::time::format::TextStyle TextStyle::asNormal() const
	{
		return callObjectMethod(
			"asNormal",
			"()Ljava/time/format/TextStyle;"
		);
	}
	inline java::time::format::TextStyle TextStyle::asStandalone() const
	{
		return callObjectMethod(
			"asStandalone",
			"()Ljava/time/format/TextStyle;"
		);
	}
	inline jboolean TextStyle::isStandalone() const
	{
		return callMethod<jboolean>(
			"isStandalone",
			"()Z"
		);
	}
} // namespace java::time::format

// Base class headers
#include "../../lang/Enum.hpp"

