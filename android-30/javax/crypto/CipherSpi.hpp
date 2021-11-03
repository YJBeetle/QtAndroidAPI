#pragma once

#include "../../JObject.hpp"

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
	class CipherSpi : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CipherSpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CipherSpi(QJniObject obj);
		
		// Constructors
		CipherSpi();
		
		// Methods
	};
} // namespace javax::crypto

