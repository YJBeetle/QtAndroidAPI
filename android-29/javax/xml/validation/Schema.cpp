#include "./Validator.hpp"
#include "./ValidatorHandler.hpp"
#include "./Schema.hpp"

namespace javax::xml::validation
{
	// Fields
	
	// QAndroidJniObject forward
	Schema::Schema(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject Schema::newValidator()
	{
		return callObjectMethod(
			"newValidator",
			"()Ljavax/xml/validation/Validator;"
		);
	}
	QAndroidJniObject Schema::newValidatorHandler()
	{
		return callObjectMethod(
			"newValidatorHandler",
			"()Ljavax/xml/validation/ValidatorHandler;"
		);
	}
} // namespace javax::xml::validation

