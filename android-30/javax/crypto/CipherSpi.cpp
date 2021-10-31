#include "../../java/nio/ByteBuffer.hpp"
#include "../../java/security/AlgorithmParameters.hpp"
#include "../../java/security/SecureRandom.hpp"
#include "./CipherSpi.hpp"

namespace javax::crypto
{
	// Fields
	
	// QJniObject forward
	CipherSpi::CipherSpi(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CipherSpi::CipherSpi()
		: __JniBaseClass(
			"javax.crypto.CipherSpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

