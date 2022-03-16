#pragma once

#include "../../JObject.hpp"

class JByteArray;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ExemptionMechanismSpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExemptionMechanismSpi(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ExemptionMechanismSpi();
		
		// Methods
	};
} // namespace javax::crypto

