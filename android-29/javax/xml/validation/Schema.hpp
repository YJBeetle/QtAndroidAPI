#pragma once

#include "../../../__JniBaseClass.hpp"

namespace javax::xml::validation
{
	class Validator;
}
namespace javax::xml::validation
{
	class ValidatorHandler;
}

namespace javax::xml::validation
{
	class Schema : public __JniBaseClass
	{
	public:
		// Fields
		
		Schema(QAndroidJniObject obj);
		// Constructors
		Schema() = default;
		
		// Methods
		QAndroidJniObject newValidator();
		QAndroidJniObject newValidatorHandler();
	};
} // namespace javax::xml::validation

