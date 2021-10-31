#pragma once

#include "../../__JniBaseClass.hpp"

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
	class AlgorithmParameterGeneratorSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AlgorithmParameterGeneratorSpi(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AlgorithmParameterGeneratorSpi(QJniObject obj);
		
		// Constructors
		AlgorithmParameterGeneratorSpi();
		
		// Methods
	};
} // namespace java::security

