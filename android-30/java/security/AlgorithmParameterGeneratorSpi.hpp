#pragma once

#include "../../JObject.hpp"

namespace java::security
{
	class AlgorithmParameters;
}
namespace java::security
{
	class SecureRandom;
}

namespace java::security
{
	class AlgorithmParameterGeneratorSpi : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlgorithmParameterGeneratorSpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlgorithmParameterGeneratorSpi(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		AlgorithmParameterGeneratorSpi();
		
		// Methods
	};
} // namespace java::security

