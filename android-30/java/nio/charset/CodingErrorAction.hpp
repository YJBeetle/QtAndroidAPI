#pragma once

#include "../../../JString.hpp"
#include "./CodingErrorAction.def.hpp"

namespace java::nio::charset
{
	// Fields
	inline java::nio::charset::CodingErrorAction CodingErrorAction::IGNORE()
	{
		return getStaticObjectField(
			"java.nio.charset.CodingErrorAction",
			"IGNORE",
			"Ljava/nio/charset/CodingErrorAction;"
		);
	}
	inline java::nio::charset::CodingErrorAction CodingErrorAction::REPLACE()
	{
		return getStaticObjectField(
			"java.nio.charset.CodingErrorAction",
			"REPLACE",
			"Ljava/nio/charset/CodingErrorAction;"
		);
	}
	inline java::nio::charset::CodingErrorAction CodingErrorAction::REPORT()
	{
		return getStaticObjectField(
			"java.nio.charset.CodingErrorAction",
			"REPORT",
			"Ljava/nio/charset/CodingErrorAction;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString CodingErrorAction::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::charset

// Base class headers

