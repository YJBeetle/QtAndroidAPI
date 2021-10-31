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
		
		// QJniObject forward
		template<typename ...Ts> explicit CipherSpi(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CipherSpi(QJniObject obj);
		
		// Constructors
		CipherSpi();
		
		// Methods
	};
} // namespace javax::crypto

