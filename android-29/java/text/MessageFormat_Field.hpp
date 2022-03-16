#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MessageFormat_Field.def.hpp"

namespace java::text
{
	// Fields
	inline java::text::MessageFormat_Field MessageFormat_Field::ARGUMENT()
	{
		return getStaticObjectField(
			"java.text.MessageFormat$Field",
			"ARGUMENT",
			"Ljava/text/MessageFormat$Field;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace java::text

// Base class headers
#include "./AttributedCharacterIterator_Attribute.hpp"
#include "./Format_Field.hpp"

