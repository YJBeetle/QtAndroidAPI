#pragma once

#include "../../JObject.hpp"

namespace java::security
{
	class AlgorithmParameters;
}

namespace javax::crypto
{
	class ExemptionMechanismSpi : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExemptionMechanismSpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExemptionMechanismSpi(QJniObject obj);
		
		// Constructors
		ExemptionMechanismSpi();
		
		// Methods
	};
} // namespace javax::crypto

