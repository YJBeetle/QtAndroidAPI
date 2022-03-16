#pragma once

#include "./Validator.def.hpp"
#include "./ValidatorHandler.def.hpp"
#include "./Schema.def.hpp"

namespace javax::xml::validation
{
	// Fields
	
	// Constructors
	
	// Methods
	inline javax::xml::validation::Validator Schema::newValidator() const
	{
		return callObjectMethod(
			"newValidator",
			"()Ljavax/xml/validation/Validator;"
		);
	}
	inline javax::xml::validation::ValidatorHandler Schema::newValidatorHandler() const
	{
		return callObjectMethod(
			"newValidatorHandler",
			"()Ljavax/xml/validation/ValidatorHandler;"
		);
	}
} // namespace javax::xml::validation

// Base class headers

