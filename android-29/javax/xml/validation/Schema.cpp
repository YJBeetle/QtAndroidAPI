#include "./Validator.hpp"
#include "./ValidatorHandler.hpp"
#include "./Schema.hpp"

namespace javax::xml::validation
{
	// Fields
	
	// QAndroidJniObject forward
	Schema::Schema(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	javax::xml::validation::Validator Schema::newValidator() const
	{
		return callObjectMethod(
			"newValidator",
			"()Ljavax/xml/validation/Validator;"
		);
	}
	javax::xml::validation::ValidatorHandler Schema::newValidatorHandler() const
	{
		return callObjectMethod(
			"newValidatorHandler",
			"()Ljavax/xml/validation/ValidatorHandler;"
		);
	}
} // namespace javax::xml::validation

