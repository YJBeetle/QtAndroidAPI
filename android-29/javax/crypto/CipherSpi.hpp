#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::nio
{
	class ByteBuffer;
}
namespace java::security
{
	class AlgorithmParameters;
}
namespace java::security
{
	class SecureRandom;
}

namespace javax::crypto
{
	class CipherSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		CipherSpi(QAndroidJniObject obj);
		// Constructors
		CipherSpi();
		
		// Methods
	};
} // namespace javax::crypto

