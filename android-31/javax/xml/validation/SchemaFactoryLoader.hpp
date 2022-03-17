#pragma once

#include "../../../JString.hpp"
#include "./SchemaFactory.def.hpp"
#include "./SchemaFactoryLoader.def.hpp"

namespace javax::xml::validation
{
	// Fields
	
	// Constructors
	
	// Methods
	inline javax::xml::validation::SchemaFactory SchemaFactoryLoader::newFactory(JString arg0) const
	{
		return callObjectMethod(
			"newFactory",
			"(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;",
			arg0.object<jstring>()
		);
	}
} // namespace javax::xml::validation

// Base class headers

