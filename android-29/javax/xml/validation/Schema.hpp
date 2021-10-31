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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Schema(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Schema(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		javax::xml::validation::Validator newValidator();
		javax::xml::validation::ValidatorHandler newValidatorHandler();
	};
} // namespace javax::xml::validation

