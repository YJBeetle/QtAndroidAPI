#include "./Validator.hpp"
#include "./ValidatorHandler.hpp"
#include "./Schema.hpp"

namespace javax::xml::validation
{
	// Fields
	
	// QJniObject forward
	Schema::Schema(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	javax::xml::validation::Validator Schema::newValidator()
	{
		return callObjectMethod(
			"newValidator",
			"()Ljavax/xml/validation/Validator;"
		);
	}
	javax::xml::validation::ValidatorHandler Schema::newValidatorHandler()
	{
		return callObjectMethod(
			"newValidatorHandler",
			"()Ljavax/xml/validation/ValidatorHandler;"
		);
	}
} // namespace javax::xml::validation

