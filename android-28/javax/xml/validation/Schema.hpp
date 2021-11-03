#pragma once

#include "../../../JObject.hpp"

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
	class Schema : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Schema(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Schema(QJniObject obj);
		
		// Constructors
		
		// Methods
		javax::xml::validation::Validator newValidator();
		javax::xml::validation::ValidatorHandler newValidatorHandler();
	};
} // namespace javax::xml::validation

